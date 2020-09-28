/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* CONSTANTES PRÉ-DEFINIDAS */

/* CONSTRUÇÃO DAS FUNÇÕES */
int Fatorial(int Numero)
{
	int Fatorial = 1;
	for(Numero;Numero>0;Numero--)
	{
		Fatorial *= Numero;	
	}
	
	return Fatorial;
}

/* CORPO DO PROGRAMA */
int main()
{	
	setlocale(LC_ALL, "Portuguese");
	printf("============PROGRAMA FATORIAL!============\n");
	
	int Numero;
	printf("\n\nInsira um número inteiro positivo (negativos serão convertidos para positivo):");
	scanf("%i",&Numero);
	
	if (Numero < 0)
			Numero *= -1;
	
	printf("\n\n O fatorial desse número é : %i",Fatorial(Numero));

	getch();
	return 0;
}
