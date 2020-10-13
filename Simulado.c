/* Bibliotecas */
#include   <stdio.h> 
#include   <conio.h> 
#include   <stdlib.h> 
#include   <string.h> 
#include   <locale.h> 
 
/* Tipos pré-definidos pelo programador */ 
typedef struct
{
   int   idade;
   char  sexo;
   char  uso;     /* p=passeio; t=trabalho; a=ambos*/ 
   char  garagem; /* s=sem; d=diurna; n=noturna; a=ambos*/
}
cliente; /* cliente é um tipo de dado para comportar informações sobre os segurados */

/* Variáveis globais */
cliente  reg_cli; /* registro do cliente */
FILE * arq;
char  resp;

/* FUNÇÕES */
void cadastra_clientes(void)
{     
 /* Abre o arquivo */
 arq = fopen("DADOS_CLIENTES.TXT" , "a");
 do
 {
   /* Pede para digitar os dados */   
   system ("cls");
   printf ("\n====== CADASTRO DE CLIENTES ========");
   printf ("\nIdade: "); fflush(stdin); scanf("%i", &reg_cli.idade);
   printf ("\nSexo : "); fflush(stdin); reg_cli.sexo = getche();
   printf ("\nUso [p=passeio; t=trabalho; a=ambos] : ");
   fflush(stdin); reg_cli.uso = getche();
   printf ("\nGaragem [s=sem; d=diurna; n=noturna; a=ambos] : ");
   fflush(stdin); reg_cli.garagem = getche();
   /* Grava o registro no arquivo */
   if ( fwrite(&reg_cli, sizeof(reg_cli), 1, arq) != 1 )
   {
        system("cls");
        printf ("\nERRO AO GRAVAR DADOS DO CLIENTE");
        getch();
        exit(0);
   }
   /* Pergunta se quer cadastrar outro cliente */
   system ("cls");
   printf ("\nDeseja cadastrar outro cliente [ N\n = não ] :");
   fflush (stdin); resp = getche();
   
  }while ( resp != 'n' && resp != 'N' );
  /* Fecha o arquivo */
  fclose(arq);
}

void consulta_clientes(void)
{
	arq = fopen("DADOS_CLIENTES.TXT" , "r");
	if(arq == NULL)
	{
		printf("\nERRO AO ABRIR ARQUIVO");
		exit(0);
	}
	
	printf("================================CLIENTES CADASTRADOS================================\n");
	printf("			IDADE			GÊNERO				USO				GARAGEM			 	\n");
	printf("====================================================================================\n");
	while(fread(&reg_cli, sizeof(reg_cli), 1, arq)) 
	{
		printf("			%i			%s				%s				%s			 	\n",reg_cli.idade,reg_cli.sexo,reg_cli.uso,reg_cli.garagem);
	}
	printf("====================================================================================");
}

void admin( void)
{ /* Controla o looping do menu */
  do
  { system ("cls");
    system ("color 61 ") ; 
    system ("mode con: cols=80 lines=25"); /* define a tela com 80 colunas e 25 linhas */
    printf ("============================================\n");
    printf ("             M E N U                        \n");
    printf ("============================================\n");
    printf ("          1. Cadastra clientes              \n");
    printf ("          2. Consulta clientes              \n");
    printf ("          9. Encerra                        \n");    
    printf ("============================================\n");
    printf ("Digite sua opção: "); 
    fflush (stdin); resp = getche(); /* Captura a opção desejada */
    /* Analisa a opção digitada */    
    switch ( resp )
    {      case '1' :   cadastra_clientes(); /* Cadastrar clientes */
           break;
           
           case '2' :   consulta_clientes();/* consulta clientes */
           break;

           case '9' :   exit(0);
           break;           
           
           default :
           {    /* Avisa sobre o erro */
                system ("color 4 ") ;
                system ("cls");
                printf ("\n\n\n\nErro. Opção inválida!\a\a\a");
                printf ("\nPressione qualquer tecla para voltar ao menu");
                getch();
           }
    }    
  }while ( resp != '9' ); /* Fica em looping enquanto não digita 9=Encerra*/
}

/* CORPO DO PROGRAMA */
main()
{
	setlocale (LC_ALL, ""); 
	admin();
}   

