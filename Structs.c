#include <stdio.h>
#define N 4

typedef struct
{
	char Rua[20],Cidade[20];
	int Num, CEP;
} endereco;

typedef struct
{
	char name[20];
	int eng, math, phys;
	float media;
	endereco end;
} student;

student data[N] = 
{
	{"Evandro",82,72,58,0,{"Rua America","Orlando",222,43655}},
	{"Thomas", 77,82,79,0,{"Rua Salvador","Braganca",11,565447}},
	{"Sabrina",52,62,39,0,{"Rua DiMaria","Silvania",12,45367}},
	{"Melinda",61,82,88,0,{"Rua das Cerejas","Tamandua",334,45465}}
};

void CalculaMedias()
{
	int i;
	for(i=0;i<N;i++)
	{
		data[i].media = (data[i].eng + data[i].math + data[i].phys) / 3;
	}
}

int main()
{	
	CalculaMedias();
	int i;
	for(i=0;i<N;i++)
	{
		printf("%7s: Eng = %3d Math = %3d Phys = %3d -- Media = %.2f\n",data[i].name,data[i].eng,data[i].math,data[i].phys,data[i].media);
		printf("Endereco: Rua = %s Numero = %i Cidade = %s  CEP = %i\n\n\n",data[i].end.Rua,data[i].end.Num,data[i].end.Cidade,data[i].end.CEP);
	}
	return 0;
}
