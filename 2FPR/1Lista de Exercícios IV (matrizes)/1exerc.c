/*QUESTÃO 01:
Faça uma função que, dada uma matriz Mm×n de
reais, gere a matriz Mt, sua transposta.*/
#include<stdio.h>

void transposta (int linha, int coluna, int matriz_original[linha][coluna], int matriz_transposta[linha][linha]);
void aleatorizador (int linha, int coluna, int limite, int matriz[linha][coluna]);
void exibir (int linha, int coluna, int matriz[linha][coluna]);

int main(){
	int lin, col;
	printf("insira a quantidade desejada de linhas e colunas: ");
	scanf("%d %d", &lin, &col);
	
	int m[lin][col], t[col][lin];
	
	printf("\nmatriz original:\n");
	aleatorizador(lin, col, 10, m);
	exibir(lin, col, m);
	
	printf("\nmatriz transposta:\n");
	transposta(lin, col, m, t);
	exibir(col, lin, t);
	
	return 0;
}

void transposta (int linha, int coluna, int matriz_original[linha][coluna], int matriz_transposta[linha][linha]){
	int i, j;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			matriz_transposta[j][i]=matriz_original[i][j];
		}
	}
}

void aleatorizador (int linha, int coluna, int limite, int matriz[linha][coluna]){
	int i, j;
	srand (time(NULL));
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			matriz[i][j]=rand()%limite;
		}
	}
}

void exibir (int linha, int coluna, int matriz[linha][coluna]){
	int i, j;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

