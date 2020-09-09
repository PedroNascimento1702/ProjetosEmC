/* BIBLIOTECAS */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* VARIÁVEIS GLOBAIS */
int	carneirinho = 0;
char dormi;
/* CORPO DO PROGRAMA */
main()
{ 
	do
	{
		system("cls");
		if(carneirinho >0)
		{
			if(carneirinho==1)
				printf("\n%i carneirinho\n\n",carneirinho);
			else
				printf("\n%i carneirinhos\n\n",carneirinho);
		}		
		printf("Ja dormi? (s-sim/n-nao)\n");
 		dormi = getch();
 		carneirinho++;
	}
	while(dormi=='n');

}
