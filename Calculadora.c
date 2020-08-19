#include <stdio.h>

int n1,n2,resultado;

int main()
{	
	printf("====PROGRAMA CALCULADORA====\n\n");
	printf("Insira o primeiro numero:\n");
	scanf("%d",&n1);
	
	printf("Insira o segundo numero:\n");
	scanf("%d",&n2);
	
	resultado = n1 + n2;	
	printf("\nResultado da soma dos dois numeros: %i",resultado);
	
	resultado = n1 - n2;	
	printf("\nResultado da subtração dos dois numeros: %i",resultado);
	
	resultado = n1 * n2;	
	printf("\nResultado da multiplicação dos dois numeros: %i",resultado);
	
	resultado = n1 / n2;	
	printf("\nResultado da divisão dos dois numeros: %i",resultado);
	
	getch();
	return 0;
}
