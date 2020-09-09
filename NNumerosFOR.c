/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <conio.h>

/* CORPO DO PROGRAMA */
int main()
{	
	int i,N,Soma = 0;
	printf("Soma dos N primeiros numeros\n\n");
	
	printf("Informe o valor de N\n");
	scanf("%i",&N);
	
	for(i=1;i<=N;i++)
	{
		Soma += i;
	}
		
	printf("\nA soma dos %i primeiros numeros = %i",N,Soma);
	getch();
	return 0;
}
