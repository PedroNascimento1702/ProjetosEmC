/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* CONSTANTES PR�-DEFINIDAS */

/* CONSTRU��O DAS FUN��ES */
float CalculaMedia(float Soma,int Quantidade)
{
	return Soma / Quantidade;
}

/* CORPO DO PROGRAMA */
int main()
{	
	setlocale(LC_ALL, "Portuguese");
	printf("============PROGRAMA M�DIA ARITM�TICA!============\n");
	
	int Numeros = 0;
	float Numero,Soma = 0;
	char continuar = 's';
	
	while(continuar == 's')
	{
		printf("\n\nInsira um n�mero positivo (negativos ser�o convertidos para positivo):");
		scanf("%f",&Numero);
		
		if (Numero < 0)
			Numero *= -1;
		
		Soma += Numero;
		
		Numeros++;
		
		printf("\nDeseja adicionar mais n�meros? (s - sim):");
		continuar = getche();
	}
	
	printf("\n\n A m�dia aritm�tica dos n�meros � : %.2f",CalculaMedia(Soma,Numeros));

	getch();
	return 0;
}
