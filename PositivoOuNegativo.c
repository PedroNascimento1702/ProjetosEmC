/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

/* CONSTANTES PR�-DEFINIDAS */

/* CONSTRU��O DAS FUN��ES */
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
	
	printf("\n\n Insira um n�mero: ");
	scanf("%f",&Numero);
	
			int a =	1 == 0? 1:4;
	printf("\n\n O N�mero %.0f � %s",Numero,Numero == 0 ? "Neutro" : Positivo(Numero) ? "Positivo" : "Negativo");
	getch();
	return 0;
}
