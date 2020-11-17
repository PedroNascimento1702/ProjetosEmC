#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int NumeroConta;
float ConsumoAgua;
char TipoConsumidor[12],escolha;

void CalcularConta()
{
	printf("\n\n Digite a conta do cliente: "); fflush(stdin); scanf("%i",&NumeroConta);
	printf("\n Consumo de água (metro cúbico): "); fflush(stdin); scanf("%f",&ConsumoAgua);
	printf("\n Digite o tipo de consumidor [RESIDENCIAL] [INDUSTRIAL] [COMERCIAL]: "); fflush(stdin); scanf("%s",&TipoConsumidor);
		
	float ValorTotal = 0;
	if(strcmp("RESIDENCIAL", TipoConsumidor) == 0)
	{
		ValorTotal = 5 + 0.05 * ConsumoAgua;
	}
	else if(strcmp("INDUSTRIAL", TipoConsumidor) == 0)
	{
		if(ConsumoAgua <= 100)
			ValorTotal = 800;
		else
		{
			ConsumoAgua -= 100;
			ValorTotal = 800 + 0.04 * ConsumoAgua;	
		}
	}
	else if(strcmp("COMERCIAL", TipoConsumidor) == 0)
	{
		if(ConsumoAgua <= 80)
			ValorTotal = 500;
		else
		{
			ConsumoAgua -= 80;
			ValorTotal = 500 + 0.25 * ConsumoAgua;	
		}			
	}
	else
	{
		printf("\n\nTIPO DE CONSUMIDOR DESCONHECIDO!");
		exit(0);
	}
	
	printf("\n====================================");
	printf("\n   CONTA:   %i                      ",NumeroConta);
	printf("\n   VALOR: R$ %.2f                   ",ValorTotal);
	printf("\n====================================");
}

int main() 
{
	setlocale(LC_ALL,"");
	printf("============PROGRAMA CALCULA CONTA DE ÁGUA============");
	
	do
	{	
		CalcularConta();		
		printf("\nOutra cobrança? [N/n] - não"); fflush(stdin); escolha = getch();
		system("cls");
	}
	while(escolha != 78 && escolha != 110);
	
  	return (0);
}

