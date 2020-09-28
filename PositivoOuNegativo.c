/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

/* CONSTANTES PRÉ-DEFINIDAS */

/* CONSTRUÇÃO DAS FUNÇÕES */
bool Positivo(float Numero)
{
	return Numero > 0;
}

/* CORPO DO PROGRAMA */
int main()
{	
	setlocale(LC_ALL, "Portuguese");
	printf("============PROGRAMA POSITIVO OU NEGATIVO!============");
	
	float Numero;
	
	printf("\n\n Insira um número: ");
	scanf("%f",&Numero);
	
			int a =	1 == 0? 1:4;
	printf("\n\n O Número %.0f é %s",Numero,Numero == 0 ? "Neutro" : Positivo(Numero) ? "Positivo" : "Negativo");
	getch();
	return 0;
}
