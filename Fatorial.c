/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* CONSTANTES PR�-DEFINIDAS */

/* CONSTRU��O DAS FUN��ES */
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
	printf("\n\nInsira um n�mero inteiro positivo (negativos ser�o convertidos para positivo):");
	scanf("%i",&Numero);
	
	if (Numero < 0)
			Numero *= -1;
	
	printf("\n\n O fatorial desse n�mero � : %i",Fatorial(Numero));

	getch();
	return 0;
}
