#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main ()
{
	int Numero; 
	printf("============PROGRAMA TABUADA============\n\n");
	printf("Insira um numero inteiro: \n");
	scanf("%i",&Numero);
	int i;
	for(i=1;i<11;i++)
	{
		printf("\n%i x %i = %i",Numero,i,Numero * i);
	}
	getch();
}
