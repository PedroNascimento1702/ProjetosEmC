/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* VARIÁVEIS GLOBAIS */
int i,Numeros[13] = {4,3,5,4,3,9,4,2,5,4,8,7,6};
char c,p='n';

/* CORPO DO PROGRAMA */
int main()
{	
 	setlocale(LC_ALL, "Portuguese");
 	do
 	{
 		system("cls");
 		printf("=======PROGRAMA VETORES=======");

		printf("\n\n Eis o vetor: ");
		for(i=0;i<13;i++)
		{
			printf("%i - ",Numeros[i]);
		}
		printf("\b\b ");
		
		printf("\n\n Selecione a operação");
		printf("\n    1-Vetor em ordem inversa");
		printf("\n    2-Somente os número pares");
		printf("\n    3-Somente os ímpares");
		printf("\n    4-Média aritmética de todos os números");
		printf("\n    5-Maior valor e sua posição no vetor");
		printf("\n    6-Menor valor e sua posição no vetor");
		printf("\n    7-Elementos repetidos");
		printf("\n    8-Elementos não repetidos");
		printf("\n    9-Frequência de cada elemento\n    ");
		
		c = getch();
		
		switch(c)
		{
			case '1':
				printf("\n\n Vetor em ordem inversa: ");
				for(i=12;i>=0;i--)
				{
					printf("%i - ",Numeros[i]);
				}
				printf("\b\b ");
				break;
			case '2':
				printf("\n\n Somente os número pares: ");
				for(i=0;i<13;i++)
				{
					if(Numeros[i] % 2 == 0)
						printf("%i - ",Numeros[i]);
				}
				printf("\b\b ");
				break;
			case '3':
				printf("\n\n Somente os ímpares: ");
				for(i=0;i<13;i++)
				{
					if(Numeros[i] % 2 != 0)
						printf("%i - ",Numeros[i]);
				}
				printf("\b\b ");
				break;
			case '4':
				printf("\n\n Média aritmética de todos os números: ");
				float Total = 0;
				for(i=0;i<13;i++)
				{					
					Total += Numeros[i];
				}
				printf("%.2f",Total / 7);
				break;
			case '5':
				printf("\n\n Maior valor e sua posição no vetor: ");
				int MaiorValor = Numeros[0],PosicaoMaior = 1;
				for(i=0;i<13;i++)
				{		
					if (Numeros[i] > MaiorValor)	
					{
						MaiorValor = Numeros[i];	
						PosicaoMaior = i + 1;
					}								
				}
				printf(" %i - Posição %i",MaiorValor,PosicaoMaior);
				break;
			case '6':
				printf("\n\n Menor valor e sua posição no vetor: ");
				int MenorValor = Numeros[0],PosicaoMenor = 1;
				for(i=0;i<13;i++)
				{		
					if (Numeros[i] < MenorValor)	
					{
						MenorValor = Numeros[i];	
						PosicaoMenor = i + 1;
					}								
				}
				printf(" %i - Posição %i",MenorValor,PosicaoMenor);
				break;
			case '7':
				printf("\n\n Elementos repetidos: ");
				int y,z,elemento=0;
				int ElementosRepetidos[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
				for(i=0;i<13;i++)
				{		
					for(y=0;y<13;y++)
					{		
						if(i != y)
						{
							if (Numeros[i] == Numeros[y])
							{
								for(z=0;z<14;z++)
								{
									if(z==13)
									{
										ElementosRepetidos[elemento] = Numeros[i];
										printf("%i - ",Numeros[i]);
										elemento++;
										break;
									}
									if(Numeros[i] == ElementosRepetidos[z])									
										break;
																			
								}
								break;					
							}								
						}														
					}							
				}
				printf("\b\b ");
				break;
			case '8':
				printf("\n\n Elementos não repetidos: ");
				int ElementosNaoRepetidos[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
				for(i=0;i<13;i++)
				{		
					for(y=0;y<13;y++)
					{		
						if(i != y)
						{
							if(Numeros[i] == Numeros[y])
							{
								ElementosNaoRepetidos[i] = 0;
								break;	
							}								
							else
								ElementosNaoRepetidos[i] = Numeros[i];							
						}														
					}							
				}
				for(i=0;i<13;i++)
				{
					if(ElementosNaoRepetidos[i] != 0)
					{
						printf("%i - ",ElementosNaoRepetidos[i]);
					}
				}
				printf("\b\b ");
				break;
			case '9':
				printf("\n\n Frequência de cada elemento: ");
				int FrequenciaElementos[13] = {1,1,1,1,1,1,1,1,1,1,1,1,1};
				
				for(i=0;i<13;i++)
				{		
					for(y=0;y<13;y++)
					{		
						if(i != y)
						{
							if(Numeros[i] == Numeros[y])
								FrequenciaElementos[i]++;													
						}														
					}							
				}
				
				for(i=0;i<13;i++)
				{
					printf("\n    %i - Frequência: %i",Numeros[i],FrequenciaElementos[i]);
				}
				
				break;
			default:
				break;
		}
		
		printf("\n\n Deseja realizar outra operação? s-sim | n-não");
		p = getch();
	}
	while(p != 'n');
	return 0;
}

