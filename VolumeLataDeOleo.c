/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>

/* CORPO DO PROGRAMA */
int main()
{	
	int Raio = 0, Altura = 0;
	float Volume = 0;
	printf("================== PROGRAMA VOLUME DE UMA LATA DE OLEO ==================");
	printf("\n\n Insira o valor do RAIO da lata de oleo\n ");
	fflush(stdin);
	scanf("%i",&Raio);

	printf("\n\n Insira o valor da ALTURA da lata de oleo\n ");
	fflush(stdin);
	scanf("%i",&Altura);
	
	Volume = 3.14159 * (Raio * Raio) * Altura;
	
	printf("\n\n O volume da lata de oleo: %.2f",Volume);
	getch();
	return 0;
}
