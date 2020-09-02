/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>

/* CORPO DO PROGRAMA */
int main()
{	
	float Celsius = 0, Fahrenheit = 0;
	printf("================== PROGRAMA CONVERTER CELSIUS PARA FAHRENHEIT ==================");
	printf("\n\n Insira o valor de graus em celsius\n ");
	fflush(stdin);
	scanf("%f",&Celsius);
	
	Fahrenheit = (Celsius * 1.8) + 32;
	
	printf("\n\n O valor de %.2f graus Celsius em Fahrenheit e igual a: %.2f graus Fahrenheit",Celsius,Fahrenheit);
	getch();
	return 0;
}
