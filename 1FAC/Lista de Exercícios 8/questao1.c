/*Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.*/
#include<stdio.h>

void calculo(int N, int A, int B){
	int i;
	printf("\nos multiplos de %d entre %d e %d sao: ", N, A, B);
	
	for(i=A;i<=B;i++){
		if(i%N==0){
			printf("%d ", i);
		}
	}
}

int main(){
	int N, A, B;
	printf("insira um numero N: ");
	scanf("%d",&N);
	printf("insira um numero A: ");
	scanf("%d",&A);
	printf("insira um numero B: ");
	scanf("%d",&B);
	
	calculo(N, A, B);
	
	return 0;
}
