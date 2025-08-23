/*
Questão 05 [1,5 pontos]:
Suponha a existência de um vetor de tamanho TAM, cada posição armazenando o nome da 
pessoa e a sua data de aniversário (representada por um struct do tipo TData, contendo 
os campos dia e mes). Pede-se o desenvolvimento das seguintes funções:
- Determinar a quantidade de pessoas que fazem aniversário no mês M;
- Exibir os nomes de todas pessoas que fazem
aniversário entre as datas d1 e d2, ambas do tipo Tdata.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 5

typedef struct{
	int dia, mes;
}Tdata;

typedef struct{
	char nome[100];
	Tdata aniversario;
}Tpessoa;

int mesmoMes (int m, int tamanho, Tpessoa vet[tamanho]);
void intervalo (int tamanho, Tpessoa vet[tamanho], Tdata d1, Tdata d2);
void inputUsuario (Tpessoa vet[]);
//void preencher (Tpessoa vet[]);

int main (){
	Tpessoa vet[TAM];
	Tdata d1, d2;
	int m;
	
	inputUsuario(vet);
	//preencher(vet);
	
	printf("1. Determinar a quantidade de pessoas que fazem aniversario no mes M;\n  > Digite um mes: ");
	scanf("%d", &m);
	
	printf("\nRESPOSTA: %d pessoas fazem aniversario no mes %d", mesmoMes(m, TAM, vet), m);
	
	printf("\n\n2. Exibir os nomes de todas pessoas que fazem aniversario entre as datas d1 e d2;\n  > Digite um intervalo de datas(DD MM):\n  DATA 1: ");
	scanf("%d %d", &d1.dia, &d1.mes);
	printf("  DATA 2: ");
	scanf("%d %d", &d2.dia, &d2.mes);
	
	printf("\nLISTA DE PESSOAS QUE FAZEM ANIVERSARIO ENTRE %d/%d E %d/%d:", d1.dia, d1.mes, d2.dia, d2.mes);
	intervalo(TAM, vet, d1, d2);
	return 0;
}

int mesmoMes (int m, int tamanho, Tpessoa vet[tamanho]){
	int quant=0, i;
	
	for(i=0;i<tamanho;i++){
		if(vet[i].aniversario.mes==m){
			quant++;
		}
	}
	
	return quant;
}

void intervalo (int tamanho, Tpessoa vet[tamanho], Tdata d1, Tdata d2){
	int i;
	
	for(i=0;i<tamanho;i++){
		if((vet[i].aniversario.dia>d1.dia) && (vet[i].aniversario.dia<d2.dia) && (vet[i].aniversario.mes>=d1.mes) && (vet[i].aniversario.mes<=d2.mes)){
			printf("\n%s", vet[i].nome);
		}
	}
}

void inputUsuario(Tpessoa vet[]){
	int i=0, resp;
	printf("PREENCHER VETOR");
	do{
		printf("\npessoa %d", i+1);
		printf("\nnome: ");
		fgets(vet[i].nome, sizeof(vet[i].nome), stdin);
		
		printf("\naniversario(DD MM): ");
		scanf("%d %d",&vet[i].aniversario.dia,&vet[i].aniversario.mes);
		
		printf("\n\nDESEJA CONTINUAR? (1=SIM, 0=NAO): ");
		scanf("%d", &resp);
		i++;
	}while(resp!=0 || i<TAM);
}

/*
void preencher (Tpessoa vet[]){
	strcpy(vet[0].nome, "Ana");
    vet[0].aniversario.dia= 10;
    vet[0].aniversario.mes= 5;

    strcpy(vet[1].nome, "Bruno");
    vet[1].aniversario.dia= 23;
    vet[1].aniversario.mes= 7;

    strcpy(vet[2].nome, "Carlos");
    vet[2].aniversario.dia =15;
    vet[2].aniversario.mes= 5;

    strcpy(vet[3].nome, "Daniela");
    vet[3].aniversario.dia= 30;
    vet[3].aniversario.mes= 12;

    strcpy(vet[4].nome, "Eduarda");
    vet[4].aniversario.dia= 2;
    vet[4].aniversario.mes= 1;
}*/
