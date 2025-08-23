/*QUESTÃO 05:
Implementar uma função que, dada uma matriz
Mm×n, gere um vetor V de tamanho n, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.*/
#include<stdio.h>
void aleatorizador (int linha, int coluna, int limite, int matriz[][coluna]);
void exibir (int linha, int coluna, int matriz[][coluna]);
void soma (int linha, int coluna, int matriz[][coluna], int vetor[]);

int main (){
	int m, n, matriz[m][n], vetor[n];
	printf("insira a quantidade de linhas e colunas: ");
	scanf("%d %d", &m, &n);
	
	aleatorizador(m, n, 10, matriz);
	printf("\nMATRIZ GERADA:\n");
	exibir(m, n, matriz);
	
	printf("\nVETOR COM A SOMA DOS ELEMENTOS DE CADA COLUNA:\n");
	soma(m, n, matriz, vetor);
	
	return 0;
}

void soma (int linha, int coluna, int matriz[][coluna], int vetor[]){
	int i,  j;
	for(j=0;j<coluna;j++){
		vetor[j]=0;
		for(i=0;i<linha;i++){
			vetor[j]+=matriz[i][j];
		}
		printf("%d ", vetor[j]);
	}
}

void aleatorizador (int linha, int coluna, int limite, int matriz[][coluna]){
	int i, j;
	srand (time(NULL));
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			matriz[i][j]=rand()%limite;
		}
	}
}

void exibir (int linha, int coluna, int matriz[][coluna]){
	int i, j;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
