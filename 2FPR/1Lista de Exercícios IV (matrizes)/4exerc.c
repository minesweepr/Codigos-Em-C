/*QUESTÃO 04:
Fazer uma função que, dada uma matriz Mn×n,
determine se ela é simétrica.*/
#include<stdio.h>
#define lin 3 
#define col 3
void aleatorizador (int linha, int coluna, int limite, int matriz[][coluna]);
void exibir (int linha, int coluna, int matriz[][coluna]);
int checar (int linha, int coluna, int matriz[][coluna]);

int main (){
	int m1[lin][col];
	
	printf("matriz 1:\n");
	aleatorizador(lin, col, 2, m1);
	exibir(lin, col, m1);
	
	printf("\na matriz %s", (checar(lin, col, m1))==1?"e simetrica.":"nao e simetrica");
	
	return 0;
}

int checar (int linha, int coluna, int matriz[][coluna]){
	int i, j;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			if(matriz[i][j]!=matriz[j][i]){
				return 0;
			}
		}
	}
	return 1;
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
