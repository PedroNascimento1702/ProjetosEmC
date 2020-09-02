#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
	int Tentativas = 3;
	char c,senha[11];

	while(Tentativas > 0)
	{
		int a = 0;
		system("cls");
		printf("Senha:");
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
		while(c != 13); /*13 é o valor de ENTER na tabela ASCII */
    
	    if(strcmp(senha, "iron maiden") == 0)
	    {  
	    	printf("\n Acesso Vip!");
	    	getch();
			exit(0); 				
		}
		else
		{
	    	printf("\n  BARRADO NA ENTRADA!");
	    	Tentativas--;
	    	getch(); 
		}
	}
		
	printf("\nTentativas excedidas! O Programa sera encerrado");
	getch();
	return 0;
}
