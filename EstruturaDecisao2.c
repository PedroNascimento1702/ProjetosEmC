/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* VÁRIAVEIS GLOBAIS */
float altura,pesoIdeal;
char sexo,a;

/* CORPO DO PROGRAMA */
int main()
{
	printf("=========   PROGRAMA PESO IDEAL   =========");
	printf("\n\nDigite sua altura\n");
	fflush(stdin); scanf("%f",&altura);
	


	printf("\nDigite seu sexo (m-masculino/f-feminino)\n");
	fflush(stdin); sexo = getche();
	
	if(sexo == 'f')
	{
		pesoIdeal = 62.1 * altura - 44.7;	
	}
	else if(sexo == 'm')
	{		
		pesoIdeal = 72.7 * altura - 58;
	}
	else
	{
		printf("\n\nSexo invalido!");
		getch();
		exit(0);					
	}
	
	printf("\n\nSeu peso ideal e: %.2f kg",pesoIdeal);

	return 0;
}
