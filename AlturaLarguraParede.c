/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* CONSTANTES PR�-DEFINIDAS */

/* CONSTRU��O DAS FUN��ES */
float Area(float Altura,float Largura)
{	
	return Altura * Largura;
}

/* CORPO DO PROGRAMA */
int main()
{	
	setlocale(LC_ALL, "Portuguese");
	printf("============PROGRAMA �REA DA PAREDA!============\n");
	
	float Altura,Largura;
	
	printf("\n\nInsira a altura da parede:");
	scanf("%f",&Altura);
	
	printf("\n\nInsira a largura da parede:");
	scanf("%f",&Largura);

	
	printf("\n\n A �rea dessa parede � : %.2f",Area(Altura,Largura));

	getch();
	return 0;
}
