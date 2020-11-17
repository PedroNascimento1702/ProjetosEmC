/*-------------------------------------------------------------- 
# Programa: Exibir dados de uma struct
# Autores: Vinicius Almeida Soares          
		   Gabriel Novato Nascimento     
           Pedro Henrique Nascimento   
           Vitor  da Silva Gomes             
# Descrição: Esse programa exibe os dados de uma struct usando sctruct dentro de struct
 -------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
#define TamanhoArray 4

student Estudante[TamanhoArray] = {
	{"Evandro",82,72,58,0,{"Rua America","Orlando",222,43655}},
	{"Thomas", 77,82,79,0,{"Rua Salvador","Braganca",11,565447}},
	{"Sabrina",52,62,39,0,{"Rua DiMaria","Silvania",12,45367}},
	{"Melinda",61,82,88,0,{"Rua das Cerejas","Tamandua",334,45465}}
};

float MediaDoEstudante = 0.0;

/*Funcao que calcula media das notas no registro Estudante*/
void CalculaMedias(){
	int Contador;
	for(Contador=0;Contador<TamanhoArray;Contador++){
		MediaDoEstudante = (Estudante[Contador].eng + Estudante[Contador].math + Estudante[Contador].phys) / 3;
		Estudante[Contador].media = MediaDoEstudante;
	}
}

int main(){	
	char Repetir = 0;
	while(Repetir != 78 && Repetir != 110){
		CalculaMedias();
		int Contador;
		for(Contador=0;Contador<TamanhoArray;Contador++){
			printf("%7s: Eng = %3d Math = %3d Phys = %3d -- Media = %.2f\n",
				Estudante[Contador].name,Estudante[Contador].eng,Estudante[Contador].math,Estudante[Contador].phys,Estudante[Contador].media);
			printf("Endereco: Rua = %s Numero = %i Cidade = %s  CEP = %i\n\n\n",
				Estudante[Contador].end.Rua,Estudante[Contador].end.Num,Estudante[Contador].end.Cidade,Estudante[Contador].end.CEP);
		}
		
		printf("Deseja calcular novamente? Digite N ou n para sair");
		fflush(stdin); 
		Repetir = getch();	
	}
	
	return 0;
}
