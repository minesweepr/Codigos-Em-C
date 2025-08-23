/*QUESTÃO 01: Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.*/
#include<stdio.h>

int main (){
	int N, Y, i;

	
	printf("forneca dois numeros, onde N e maior que Y...\n");
	printf("insira um numero inteiro positivo N: ");
	scanf("%d",&N);
	printf("insira um numero inteiro positivo Y: ");
	scanf("%d",&Y);
	
	if (N<=0 || Y<=0 || Y>N){
		printf("valor invalido, tente novamente.");
		return 0;
	}
	
	for(i=Y;i<N;i+=Y){ //pq nao pode ser i+=i??? consegui a resposta, é pq i atualiza e Y nao
		printf("%d ", i);
	}
	
	
	
	return 0;
}

