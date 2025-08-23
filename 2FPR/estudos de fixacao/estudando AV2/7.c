/*
Questão 03 [2,5 pontos]:
Considere a existência de um vetor de structs com quant posições, 
onde cada uma destas armazena os seguintes dados sobre um grupo de 
pessoas: nome (string), gênero (char) e idade (int). Pede-se uma 
função que determine se os elementos deste vetor estão ordenados e 
retorne 1, caso estejam ordenados, e 0, caso contrário.
Observação: o vetor será considerado ordenado se estiver organizado 
crescentemente em função da idade. Porém, no caso de pessoas com a 
mesma idade, estas devem estar ordenadas crescentemente pelo nome.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

#define QUANT 5

typedef struct{
	char nome[50], genero;
	int idade;
}Sdados;

int ordenada (int tam, Sdados vet[tam]);
void preencherDes(Sdados vet[]);
void preencherOrd(Sdados vet[]);

int main (){
	Sdados vet[QUANT];
	
	preencherDes(vet);
	//preencherOrd(vet);
	
	printf("sua struct %sesta ordenada.", ordenada(QUANT, vet)==1? "":"nao ");
	
	return 0;
}

int ordenada (int tam, Sdados vet[tam]){
	int anterior=INT_MIN, i;
	
	for(i=0;i<tam;i++){
		if(anterior>vet[i].idade || (anterior==vet[i].idade && strcmp(vet[i].nome,vet[i-1].nome)<0)){
			return 0;
		}
		anterior=vet[i].idade;
	}
	return 1;
}

void preencherDes(Sdados vet[]) {
    strcpy(vet[0].nome, "Carlos");
    vet[0].genero = 'M';
    vet[0].idade = 25;

    strcpy(vet[1].nome, "Ana");
    vet[1].genero = 'F';
    vet[1].idade = 22;

    strcpy(vet[2].nome, "Beatriz");
    vet[2].genero = 'F';
    vet[2].idade = 25;

    strcpy(vet[3].nome, "Daniel");
    vet[3].genero = 'M';
    vet[3].idade = 20;

    strcpy(vet[4].nome, "Eduardo");
    vet[4].genero = 'M';
    vet[4].idade = 25;
}

void preencherOrd(Sdados vet[]) {
    strcpy(vet[0].nome, "Daniel");
    vet[0].genero = 'M';
    vet[0].idade = 20;

    strcpy(vet[1].nome, "Ana");
    vet[1].genero = 'F';
    vet[1].idade = 22;

    strcpy(vet[2].nome, "Beatriz");
    vet[2].genero = 'F';
    vet[2].idade = 25;

    strcpy(vet[3].nome, "Carlos");
    vet[3].genero = 'M';
    vet[3].idade = 25;

    strcpy(vet[4].nome, "Eduardo");
    vet[4].genero = 'M';
    vet[4].idade = 25;
}

