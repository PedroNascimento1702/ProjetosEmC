/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* CONSTANTES PRÉ-DEFINIDAS */

/* CONSTRUÇÃO DAS FUNÇÕES */
double CalculaRaioEsfera(float Raio)
{
	return (4.0/3) * 3.14 * pow(Raio,3);
}

/* CORPO DO PROGRAMA */
int main()
{	
	printf("============PROGRAMA VOLUME ESFERA!============");
	
	float Raio;
	
	printf("\n\n Insira o valor do raio da esfera: ");
	scanf("%f",&Raio);
	
				
	printf("\n\n O Volume da esfera de raio %.2f = %.2f",Raio,CalculaRaioEsfera(Raio));
	getch();
	return 0;
}
