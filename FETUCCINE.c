/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>

/* VARIÁVEIS GLOBAIS */
int Serie[50],i,col;

/* CORPO DO PROGRAMA */
int main()
{	
	printf("============PROGRAMA FETUCCINE============");
	printf("\n\n Informe o primeiro termo: ");
	fflush(stdin); scanf("%i",&Serie[0]);
	
	printf("\n Informe o segundo termo: ");
	fflush(stdin); scanf("%i",&Serie[1]);
	
	
	for(i=2;i<50;i++)
	{
		if(i%2==0)
			Serie[i] = Serie[i-1] + Serie[i-2];
		else
			Serie[i] = Serie[i-1] - Serie[i-2];
	}
	
	printf("\n Resultado da serie: \n\n");
	for(i=49;i>=0;i--)
	{
		col++;
		switch(col)
		{
			case 1:
				printf("    %i    %c",Serie[i],175);
				break;
			case 2:
				printf("    %i    %c",Serie[i],175);
				break;
			case 3:
				printf("    %i    %c",Serie[i],175);
				break;
			case 4:
				printf("    %i    %c",Serie[i],175);
				break;
			case 5:
				if (i==0)
					printf("    %i    \n",Serie[i]);
				else
					printf("    %i    %c\n",Serie[i],175);
				col = 0;
				break;
		}
		
	}
	printf("\b ");
	getch();
	return 0;
}
