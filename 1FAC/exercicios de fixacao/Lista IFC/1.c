/*Escreva uma função que receba dois números inteiros retorne o menor
número*/
#include<stdio.h>
int menor (int n1, int n2){
	return (n1<n2) ? n1 : n2;
	
}

int main (){
	int n1, n2, res;
	printf("insira dois numeros: ");
	scanf("%d %d",&n1,&n2);
	
	printf("\n%d e o menor.",res=menor(n1,n2));
	return 0;
}
