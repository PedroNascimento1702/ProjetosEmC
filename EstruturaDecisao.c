/* BIBLIOTECAS A SEREM UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* VÁRIAVEIS GLOBAIS */
char senha[11],c;
int a;

/* CORPO DO PROGRAMA */
int main()
{
	inicio:
	system("cls");
   	printf("Senha:");
	a = 0;
	do
	{
		fflush(stdin);
    	c = getch();
        if(isprint(c))  /*Analisa se o valor da variável c é imprimivel*/
		{       
	        senha[a]=c; /*Se for, armazena o caractere*/
	        a++;
	        
	        printf("*"); /*imprime o * Anterisco*/
        }
        else if(c==8 && a) /*8 é o caractere BackSpace na tabela ASCII, && a analisa se a é diferente de 0*/
		{     
           senha[a]='\0';
           a--;
           printf("\b \b"); /*Apagando o caractere digitado*/
        }
    }
	while(c!=13); /*13 é o valor de ENTER na tabela ASCII */
    
    if(strcmp(senha, "1310") == 0)
    {
    	do
		{
    		system("cls");
    		printf("======================");
    		printf("\n       a = saldo      ");
    		printf("\n     b = deposito     ");
    		printf("\n    c = pagamentos    ");
    		printf("\n   d = transferencias ");
    		printf("\n       e = sair       ");
    		printf("\n======================\n\n\n");
    		fflush(stdin);
    		c = getche();
    	
	    	switch (c)
	    	{
	    		case 'a':
	    			printf("\nOperacao : saldo");
	    			getch();
	    			break;
	    		case 'b':
	    			printf("\nOperacao : deposito");
	    			getch();
	    			break;
	    		case 'c':
	    			printf("\nOperacao : pagamentos");
	    			getch();
	    			break;
	    		case 'd':
	    			printf("\nOperacao : transferencias");
	    			getch();
	    			break;
	    		case 'e':
	    			printf("\nEncerrando operacoes");
	    			break;
	    		default:
	    			printf("\nOpcao invalida");
	    			getch();
	    			break;
			}
		}
		while(c != 'e');
    	
	}
	else
	{
		system("cls");
    	printf("\n\n\n\n\n\n\n          Senha incorreta!");
		getch();
		goto inicio;
	}
	return 0;
}
