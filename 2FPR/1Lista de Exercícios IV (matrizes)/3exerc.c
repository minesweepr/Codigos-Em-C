/*QUESTÃO 03:
Desenvolver uma função que gere uma matriz
Mnxn, nos moldes do exemplo apresentado a
seguir (que consiste em uma matriz de ordem
5)
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9*/
#include<stdio.h>
void molde (int linha, int coluna, int matriz[][coluna]);
void exibir (int linha, int coluna, int matriz[][coluna]);

int main (){
	int m[5][5];
	molde(5, 5, m);
	exibir(5, 5, m);
	
	return 0;
}

void molde (int linha, int coluna, int matriz[][coluna]){
	int i, j;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			matriz[i][j]=i+j+1;
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
