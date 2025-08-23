/*Implementar uma função que, dado um
número inteiro, calcule (e retorne) a soma e a
média de seus divisores.*/

#include<stdio.h>
int calculo (int n){
	int i, soma=0, count=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			soma+=i;
			count++;
		}
	}
	
	return soma;
}

int main (){
	int n, *soma;
	printf("insira um numero inteiro:\nn = ");
	scanf("%d",&n);
	
	*soma=calculo(n);
	printf("\nsoma dos divisores: %d\nmedia dos divisores: %.1f", *soma, (float)*soma/count);
	
	return 0;
}

