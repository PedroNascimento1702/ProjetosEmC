/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <conio.h>

/* CORPO DO PROGRAMA */
int main()
{	
	int i,Total;
	printf("Pagamento do monge\n\n");	
	
	for(i=1;i<=16;i++)
	{
		if (i==1)
			Total = 1;
		else
			Total *= 2;
	}
		
	printf("\nO total que o monge vai receber com 1/4 do tabuleiro = %i",Total);
	getch();
	return 0;
}
