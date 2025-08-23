/*QUESTÃO 02:
Desenvolver uma função que, dada uma matriz
Mm×n, determine se um número X se encontra
na linha L da matriz.*/
#include<stdio.h>
void aleatorizador (int linha, int coluna, int limite, int matriz[][coluna]);
void exibir (int linha, int coluna, int matriz[][coluna]);
int procurar (int linha, int coluna, int matriz[][coluna], int numero, int linha_matriz);

int main (){
	int lin, col, x, l;
	printf("insira a quantidade desejada de linhas e colunas: ");
	scanf("%d %d", &lin, &col);
	
	int m[lin][col];
	
	printf("\nmatriz:\n");
	aleatorizador(lin, col, 10, m);
	exibir(lin, col, m);
	
	printf("\ninsira um numero e a linha na qual deseja encontra-lo: ");
	scanf("%d %d", &x, &l);
	
	printf("o numero %d %s", x, (procurar(lin, col, m, x, l))==1? "foi encontrado na respectiva linha." : "nao foi encontrado na respectiva linha.");
	
	return 0;
}

int procurar (int linha, int coluna, int matriz[][coluna], int numero, int linha_matriz){
	int i;
	for(i=0;i<coluna;i++){
		if(matriz[linha_matriz][i]==numero){
			return 1;
		}
	}
	return 0;
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
