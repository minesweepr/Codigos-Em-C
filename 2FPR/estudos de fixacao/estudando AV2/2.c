/*
Questão 02 [2,5 pontos]:
Implementar uma função que utilize recursividade que, dado um vetor 
com quant inteiros, exiba, para cada elemento do conjunto, a quantidade 
de elementos do vetor que são maiores do que ele, como ilustrado no exemplo a seguir:

8- 0 valores maiores 
6- 2 valores maiores 
2-5 valores maiores 
1-7 valores maiores 
8- 0 valores maiores 
5-3 valores maiores 
2-5 valores maiores 
4- 4 valores maiores
*/
#include<stdio.h>
#include<stdlib.h>

void exibir (int tam, int v[tam]);
void maiores (int tam, int v[tam], int atual, int i, int contador);

int main (){
	int v[8]={8,6,2,1,8,5,2,4};
	
	exibir(8, v);
	maiores(8, v, 0, 0, 0);
	
	return 0;
}

void exibir (int tam, int v[tam]){
	int i;
	printf("vetor = ");
	for(i=0;i<tam;i++){
		printf("%d ", v[i]);
	}
}

void maiores (int tam, int v[tam], int atual, int i, int contador){
	if(atual>=tam){
		return;
	}
	if(i<tam){
		if(v[atual]<v[i]){
			maiores(tam, v, atual, i+1, contador+1);
		} else {
			maiores(tam, v, atual, i+1, contador);
		}
	} else {
		printf("\n%d - %d valores maiores", v[atual], contador);
		maiores(tam, v, atual+1, 0, 0);
	}
}


