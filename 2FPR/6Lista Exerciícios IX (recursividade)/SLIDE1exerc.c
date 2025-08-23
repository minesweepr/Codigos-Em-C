/*
Recursividade

Exerc�cios: desenvolver fun��es recursivas para a
resolu��o de cada problema apresentado a seguir:

Calcular o valor de a x b, atrav�s de sucessivas somas, onde a
e b s�o inteiros positivos.

Calcular o n-�simo termo da sequ�ncia de fibonacci

(1,1,2,3,5,8,13,21,...)

Busca de um n�mero inteiro n em um vetor ordenado
crescentemente, retornando a sua posi��o (caso encontrado).*/
#include<stdio.h>
#include<stdlib.h>

int calculo (int a, int b);

int main (){
	int a, b;
	printf("insura dois valores: ");
	scanf("%d %d", &a, &b);
	
	printf("\n%d x %d = %d", a, b, calculo(a, b));
	
	return 0;
}

int calculo (int a, int b){
	if(a==0){
		return 0;
	}
	else{
		return b + calculo(a-1, b);
	}
}
