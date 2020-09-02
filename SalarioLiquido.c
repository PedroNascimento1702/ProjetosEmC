/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>

/* CORPO DO PROGRAMA */
int main()
{	
	float SalarioBruto = 0, ImpostoDeRenda = 0, Previdencia = 0, SalarioLiquido = 0,DescontoIR = 0, DescontoPrevidencia = 0;
	printf("================== PROGRAMA SALARIO ==================");
	printf("\n\n Insira o salario bruto\n ");
	fflush(stdin);
	scanf("%f",&SalarioBruto);
	
	DescontoIR = SalarioBruto * 0.085;
	SalarioLiquido = SalarioBruto - DescontoIR;
	DescontoPrevidencia = SalarioLiquido * 0.275;
	SalarioLiquido = SalarioLiquido - DescontoPrevidencia;
	
	printf("\n\n Com IR de 8,5%% (R$%.2f) e Previdencia de 27,5%% (R$%.2f) o salario liquido e igual a: R$%.2f",DescontoIR,DescontoPrevidencia,SalarioLiquido);
	getch();
	return 0;
}
