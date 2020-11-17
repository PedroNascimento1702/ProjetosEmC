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
