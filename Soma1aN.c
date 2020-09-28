/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>

/* CONSTANTES PRÉ-DEFINIDAS */

/* CONSTRUÇÃO DAS FUNÇÕES */
int Soma1aN(int NumeroN)
{
	return (NumeroN * (1 + NumeroN) / 2);
}

/* CORPO DO PROGRAMA */
int main()
{	
	printf("============PROGRAMA SOMA DE 1 A N!============");
	
	int NumeroN;
	
	printf("\n\n Insira o numero N (Inteiro Positivo): ");
	scanf("%i",&NumeroN);
	
	if (NumeroN < 0)
	{
		printf("\n Numero Negativo nao aceito! O numero sera convertido para positivo!");
		NumeroN *= -1;
	}
			
	printf("\n\n Soma de 1 a %i = %i",NumeroN,Soma1aN(NumeroN));
	getch();
	return 0;
}
