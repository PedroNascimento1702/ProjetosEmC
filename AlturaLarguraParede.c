/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* CONSTANTES PRÉ-DEFINIDAS */

/* CONSTRUÇÃO DAS FUNÇÕES */
float Area(float Altura,float Largura)
{	
	return Altura * Largura;
}

/* CORPO DO PROGRAMA */
int main()
{	
	setlocale(LC_ALL, "Portuguese");
	printf("============PROGRAMA ÁREA DA PAREDA!============\n");
	
	float Altura,Largura;
	
	printf("\n\nInsira a altura da parede:");
	scanf("%f",&Altura);
	
	printf("\n\nInsira a largura da parede:");
	scanf("%f",&Largura);

	
	printf("\n\n A área dessa parede é : %.2f",Area(Altura,Largura));

	getch();
	return 0;
}
