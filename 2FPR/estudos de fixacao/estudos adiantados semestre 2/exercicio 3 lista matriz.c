/*Implementar uma função que, dada uma matriz
M10×8, gere um vetor V de tamanho 8, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.*/
#include<stdio.h>
#define LINHA 10
#define COLUNA 8
void aleatorizador(int matriz[][COLUNA], int linhas, int colunas, int limite);
void exibirMatriz(int matriz[][COLUNA], int linhas, int colunas);
void vetor(int matriz[][COLUNA], int linhas, int colunas, int vetor[]);
void exibirVetor(int vetor[], int tamanho);

int main (){
	int M[LINHA][COLUNA], V[COLUNA];
	
	printf("matriz:\n");
	aleatorizador(M, LINHA, COLUNA, 10);
	exibirMatriz(M, LINHA, COLUNA);
	
	printf("\n\nvetor: ");
	vetor(M, LINHA, COLUNA, V);
	exibirVetor(V, COLUNA);
	
	return 0;
}


void aleatorizador(int matriz[][COLUNA], int linhas, int colunas, int limite){
	int i, j;
	srand (time(NULL));
	
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			matriz[i][j]=rand()%limite;
		}
	}
}

void exibirMatriz(int matriz[][COLUNA], int linhas, int colunas){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

void vetor(int matriz[][COLUNA], int linhas, int colunas, int vetor[]){
	int i, j;
	for(j=0;j<colunas;j++){
		vetor[j]=0;
		for(i=0;i<linhas;i++){
			vetor[j]+=matriz[i][j];
		}
	}
}

void exibirVetor(int vetor[], int tamanho){
    int i;
    for (i=0;i<tamanho;i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
