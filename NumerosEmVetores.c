/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>

/* VARIÁVEIS GLOBAIS */
float Numeros[10],numero;
int i,q;

/* CORPO DO PROGRAMA */
int main()
{	
	printf("=======PROGRAMA NUMEROS REAIS EM VETOR=======");
	printf("\nDigite 10 numeros reais");
	for(i=0;i<10;i++)
	{
		printf("\nNumero %i - ",i+1);
		fflush(stdin);
		scanf("%f",&Numeros[i]);

	}
	
	printf("\n\nMostrando todos os numeros na tela : ");
	
	for(q=0;q<i;q++)
	{
		printf("%.2f - ",Numeros[q]);
	}
	printf("\b\b ");
	getch();
	return 0;
}
