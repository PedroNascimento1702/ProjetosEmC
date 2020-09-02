/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>

/* CORPO DO PROGRAMA */
int main()
{	
	float Salario = 0;
	printf("================== PROGRAMA REAJUSTE SALARIO ==================");
	printf("\n\n Insira o salario\n ");
	fflush(stdin);
	scanf("%f",&Salario);
	
	Salario = Salario + (Salario * 0.25);
	
	printf("\n\n Seu novo salario e igual a: %.2f",Salario);
	getch();
	return 0;
}
