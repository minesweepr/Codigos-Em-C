/*Desenvolver uma função que, dado um número inteiro n, determine o seu maior algarismo, assim como o menor.
Nota: apresentar a main chamando a função implementada.*/
#include<stdio.h>
#include<limits.h>
int algrsms (int n, int *maior);

int main (){
	int n, maior, res;
	printf("insira um numero:\nn = ");
	scanf("%d",&n);
	
	res=algrsms(n, &maior);
	printf("\nmenor algarismo = %d\nmaior algarismo = %d", res, maior);
	
	return 0;
}

int algrsms (int n, int *maior){
	int menor=INT_MAX, alg;
	*maior=INT_MIN;
	
	do{
		alg=n%10;
		n/=10;
		if(alg>*maior){
			(*maior)=alg;
		}
		if(alg<menor){
			menor=alg;
		}
	}while(n>0);
	return menor;
}
