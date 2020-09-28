/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>

/* VARIÁVEIS GLOBAIS */
int i,q,Numeros[10];

/* CORPO DO PROGRAMA */
int main()
{	
	printf("=======PROGRAMA QUADRADO DE INTEIROS EM VETOR=======");
	printf("\nDigite 10 numeros inteiros");
	for(i=0;i<10;i++)
	{
		printf("\nNumero %i - ",i+1);
		fflush(stdin);
		scanf("%i",&Numeros[i]);
		Numeros[i] *= Numeros[i];
	}
	
	printf("\n\nMostrando o quadrado dos numeros na tela : ");
	
	for(q=0;q<i;q++)
	{
		printf("%i - ",Numeros[q]);
	}
	printf("\b\b ");
	getch();
	return 0;
}
