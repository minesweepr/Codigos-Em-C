/*
Questão 02 [2,5 pontos]:
Desenvolver uma função recursiva que, dado um vetor de 
inteiros de tamanho TAM, preencha as suas
posições com os valores de TAM (na posição 0) a 1
(posição TAM-1).
Exemplo: TAM = 10
*/
#include<stdio.h>
#include<stdlib.h>
#define TAM 15

void preencher (int *vet, int posicao);

int main (){
	int *vet=(int*)malloc(TAM*sizeof(int));
	
	preencher(vet, TAM);
	
	return 0;
}

void preencher (int *vet, int posicao){
	if(posicao==0){
		return;
	}
	
	*vet=posicao;
	preencher(vet+1, posicao-1);
	printf("%d ", *vet);
}




































/*


void exibir (int *vet, int pos);
void preencher (int *vet, int pos);

int main (){
	int *vet=(int*) malloc(TAM*sizeof(int));
	
	exibir(vet, TAM);
	
	return 0;
}

void exibir (int *vet, int pos){
	preencher(vet, pos);
	int i;
	printf("vetor = ");
	for(i=0;i<pos;i++){
		printf("%d ", *(vet+i));
	}
}

void preencher (int *vet, int pos){
	if(pos==0){
		return;
	}
	*vet=pos;
	preencher(vet+1,pos-1);
}*/
