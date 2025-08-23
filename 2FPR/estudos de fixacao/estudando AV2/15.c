/*
Questão 04 [2,5 pontos]:
Considere um vetor com QUANT posições, cada uma destas armazenando 
informações (campos nome e media) sobre os alunos de uma turma. 
Desenvolver uma função que verifique se o vetor encontra-se ordenado 
decrescentemente em função da média dos alunos. No caso de mais de um 
aluno com a mesma média, verificar ainda se seus nomes estão em ordem alfabética.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define QUANT 5

typedef struct{
	char nome[100];
	float media;
}Tinfo;

int decrescente(int tamanho, Tinfo vet[tamanho]);
void preencher(Tinfo vet[]);

int main (){
	Tinfo vet[QUANT];
	preencher(vet);
	printf("o vetor %sse encontra ordenado decrescentemente.", decrescente(QUANT, vet)==1? "nao ": "");
	return 0;
}
//3 2 1
int decrescente(int tamanho, Tinfo vet[tamanho]){
	int i;
	for(i=1;i<tamanho;i++){
		if(vet[i-1].media<vet[i].media || (vet[i-1].media==vet[i].media && strcmp(vet[i-1].nome, vet[i].nome)>0)){
			return 1;
		}
	}
	return 0;
}

void preencher(Tinfo vet[]){
    strcpy(vet[0].nome, "Ana");     
	vet[0].media = 9.0;
	
    strcpy(vet[1].nome, "Bruno");   
	vet[1].media = 8.5;
	
    strcpy(vet[2].nome, "Carlos");  
	vet[2].media = 8.5;
	
    strcpy(vet[3].nome, "Daniela"); 
	vet[3].media = 7.0;
	
    strcpy(vet[4].nome, "Eva");     
	vet[4].media = 6.0;
}
