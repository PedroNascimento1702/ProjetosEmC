/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>

/* CORPO DO PROGRAMA */
int main()
{	
	int Numero = 0;
	printf("================== PROGRAMA DOBRO E QUADRADO ==================");
	printf("\n\n Insira um numero\n ");
	fflush(stdin);
	scanf("%i",&Numero);
	
	printf("\n\n O dobro desse numero: %i \n O quadrado desse numero: %i ",Numero * 2, Numero * Numero);
	getch();
	return 0;
}
