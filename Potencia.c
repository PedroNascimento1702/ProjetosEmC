/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>

/* CORPO DO PROGRAMA */
int main()
{	
	int Base = 0, Expoente = 0, Potencia = 1,i;
	printf("================== PROGRAMA POTENCIA ==================");
	printf("\n\n Insira a base\n ");
	fflush(stdin);
	scanf("%i",&Base);
	
	printf("\n\n Insira o expoente\n ");
	fflush(stdin);
	scanf("%i",&Expoente);
	
	for(i = 0;i<Expoente;i++)
	{
		Potencia *= Base;
	}
	
	printf("\n\n %i elevado a %i e igual a: %i ",Base,Expoente,Potencia);
	getch();
	return 0;
}
