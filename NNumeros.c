/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <conio.h>

/* CORPO DO PROGRAMA */
int main()
{	
	int N,Soma;
	printf("Soma dos N primeiros numeros\n\n");
	
	printf("Informe o valor de N\n");
	scanf("%i",&N);
	
	Soma = N * (1 + N) / 2;
	
	printf("\nA soma dos %i primeiros numeros = %i",N,Soma);
	getch();
	return 0;
}
