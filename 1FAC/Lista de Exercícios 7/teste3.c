#include<stdio.h>

int main (){
	int N, i=2, primo;
	printf("insira um numero inteiro: ");
	scanf("%d",&N);
	
	while(N>i){
		if(N%i==0){
			primo=0;
		}
		i++;
	}
	
	if(primo==0){
		printf("o numero %d nao e primo.", N);
	}
	else{
		printf("o numero %d e primo.", N);
	}
	
	return 0;
}
