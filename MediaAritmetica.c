/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* CONSTANTES PRÉ-DEFINIDAS */

/* CONSTRUÇÃO DAS FUNÇÕES */
float CalculaMedia(float Soma,int Quantidade)
{
	return Soma / Quantidade;
}

/* CORPO DO PROGRAMA */
int main()
{	
	setlocale(LC_ALL, "Portuguese");
	printf("============PROGRAMA MÉDIA ARITMÉTICA!============\n");
	
	int Numeros = 0;
	float Numero,Soma = 0;
	char continuar = 's';
	
	while(continuar == 's')
	{
		printf("\n\nInsira um número positivo (negativos serão convertidos para positivo):");
		scanf("%f",&Numero);
		
		if (Numero < 0)
			Numero *= -1;
		
		Soma += Numero;
		
		Numeros++;
		
		printf("\nDeseja adicionar mais números? (s - sim):");
		continuar = getche();
	}
	
	printf("\n\n A média aritmética dos números é : %.2f",CalculaMedia(Soma,Numeros));

	getch();
	return 0;
}
