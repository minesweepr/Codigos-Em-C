/*Desenvolver uma função que, dada uma matriz
M15×20, determine se um número X se encontra
na linha L da matriz.*/
#include<stdio.h>
#define LINHAS 3 //15
#define COLUNAS 3 //20

void aleatorizador(int matriz[][COLUNAS], int linhas, int colunas, int limite);
void exibir(int matriz[][COLUNAS], int linhas, int colunas);
int checar(int matriz[][COLUNAS], int lin, int num);

int main (){
	int M[LINHAS][COLUNAS], num, lin;
	
	aleatorizador(M, LINHAS, COLUNAS, 10);
	exibir(M, LINHAS, COLUNAS);
	
	printf("insira o numero e a linha na qual deseja encontra-lo: ");
	scanf("%d %d",&num,&lin);
	
	printf("\no numero escolhido %s", checar(M, lin, num)==1 ? "foi encontrado!" : "nao foi encontrado.");
}

void aleatorizador(int matriz[][COLUNAS], int linhas, int colunas, int limite){
	int i, j;
	srand (time(NULL));
	
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			matriz[i][j]=rand()%limite;
		}
	}
}

void exibir(int matriz[][COLUNAS], int linhas, int colunas){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int checar(int matriz[][COLUNAS], int lin, int num){
	int j;
	for(j=0;j<COLUNAS;j++){
		if(matriz[lin][j]==num){
			return 1;
		}
	}
	return 0;
}


