/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <windows.h>

/* CORPO DO PROGRAMA */
int main()
{	
	int AnoNascimento = 0,Idade = 0;
	printf("================== PROGRAMA ANO E IDADE ==================");
	printf("\n\n Insira o ano de nascimento\n ");
	fflush(stdin);
	scanf("%i",&AnoNascimento);

	SYSTEMTIME str_t;
	GetSystemTime(&str_t);
    int anoAtual = str_t.wYear;
    
    Idade = anoAtual - AnoNascimento;
    printf("\n Idade : %i \n Idade em Meses : %i \n Idade em dias : %i \n Idade em semanas : %i",Idade,Idade * 12,Idade * 365,Idade * 52);
    
	getch();
	return 0;
}
