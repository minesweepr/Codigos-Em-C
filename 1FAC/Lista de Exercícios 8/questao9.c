/*Implementar uma fun��o que, dado um
n�mero inteiro, calcule (e retorne) a soma e a
m�dia de seus divisores.*/

#include<stdio.h>
void calculo (int n){
	int i, soma=0, count=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			soma+=i;
			count++;
		}
	}
	
	printf("\nsoma dos divisores: %d\nmedia dos divisores: %.1f", soma, (float)soma/count);
}

int main (){
	int n;
	printf("insira um numero inteiro:\nn = ");
	scanf("%d",&n);
	
	calculo(n);
	
	return 0;
}

