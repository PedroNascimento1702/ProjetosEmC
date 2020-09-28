/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>

/* CONSTANTES PRÉ-DEFINIDAS */

/* CONSTRUÇÃO DAS FUNÇÕES */
int CalculaSegundos(int Horas,int Minutos,int Segundos)
{
	return Horas * 60 * 60 + Minutos * 60 + Segundos;
}

/* CORPO DO PROGRAMA */
int main()
{	
	printf("============PROGRAMA SEGUNDOS!============");
	
	int Horas,Minutos,Segundos;
	
	printf("\n\n Insira o valor das horas: ");
	scanf("%i",&Horas);
	
	do
	{
		printf("\n Insira o valor dos minutos: ");
		scanf("%i",&Minutos);
		
		if(Minutos < 0 || Minutos > 59)
			printf("\n Minutos precisam estar entre 0 e 59");
	}
	while(Minutos < 0 || Minutos > 59);
	
	do
	{
		printf("\n Insira o valor dos segundos: ");
		scanf("%i",&Segundos);
		
		if(Segundos < 0 || Segundos > 59)
			printf("\n Segundos precisam estar entre 0 e 59");
	}
	while(Segundos < 0 || Segundos > 59);
	
			
	printf("\n\n O Total de segundos dentro de %i h %i min %i = %i s",Horas,Minutos,Segundos,CalculaSegundos(Horas,Minutos,Segundos));
	getch();
	return 0;
}
