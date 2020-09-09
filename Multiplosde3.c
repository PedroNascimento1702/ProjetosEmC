/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <conio.h>

/* CORPO DO PROGRAMA */
int main()
{	
	printf("Multiplos de 3 entre 0 e 100\n\n");
	int i,col = 0;		
	for(i=0;i<=100;i++)
	{
		
		if(i % 3 == 0)
		{
			col++;
			switch(col){
				case 1:
					printf("%i      ",i);
					break;
				case 2:
					printf("%i      ",i);
					break;
				case 3:
					printf("%i\n\n",i);
					col = 0;
					break;
			}
			
		}
	}
	getch();
	return 0;
}
