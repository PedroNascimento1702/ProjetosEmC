/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <conio.h>

/* CORPO DO PROGRAMA */
int main()
{	
	printf("Quadrado dos inteiros entre 15 e 200\n\n");
	int i,col = 0;		
	for(i=15;i<=200;i++)
	{	
		col++;
		switch(col)
		{
			case 1:
				printf("%i elevado ao quadrado = %i     ",i,i*i);
				break;
			case 2:
				printf("%i elevado ao quadrado = %i     ",i,i*i);
				break;
			case 3:
				printf("%i elevado ao quadrado = %i     ",i,i*i);
				break;
			case 4:
				printf("%i elevado ao quadrado = %i \n",i,i*i);
				col = 0;
				break;
		}
	
	}
	getch();
	return 0;
}

