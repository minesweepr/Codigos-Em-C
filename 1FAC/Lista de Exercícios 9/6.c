/*Desenvolver uma função que, dado um número
inteiro N, calcule o valor do seguinte
somatório:*/
#include<stdio.h>
#include<math.h>
void calculo (int n){
	int i, j, div=1;
	float parte1, soma=1;
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++){
			div*=j;
		}
		parte1=pow(n-i,i)/div;
	    soma+=parte1;
	}
	//printf("teste %.1f",soma);
}

int main (){
	int n;
	printf("insira um numero N: ");
	scanf("%d",&n);
	
	calculo(n);
	
	return 0;
}
