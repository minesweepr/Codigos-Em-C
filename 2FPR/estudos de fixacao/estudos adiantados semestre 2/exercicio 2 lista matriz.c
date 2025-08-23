/*Desenvolver uma função que gere a seguinte
matriz M5?5:
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9*/
#include<stdio.h>
void formacao(int matriz[][5], int linhas, int colunas);
void exibir(int matriz[][5], int linhas, int colunas);

int main (){
	int M[5][5];
	
	formacao(M, 5, 5);
	exibir(M, 5, 5);
	
	return 0;
}

void formacao(int matriz[][5], int linhas, int colunas){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			matriz[i][j]=i+j+1;
		}
	}
}

void exibir(int matriz[][5], int linhas, int colunas){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
