/*Escreva um programa em C que leia 5 valores inteiros e imprima para
cada um o seu correspondente valor absoluto. Para obter o valor absoluto
do n�mero utilize a fun��o Absoluto especificada abaixo 2:
Nome: Absoluto
Descri��o: Retorna o valor absoluto do n�mero fornecido.
Entrada: int n
Sa�da: (int) O respectivo valor absoluto de n.*/
#include<stdio.h>

int Absoluto (int n){
	return (n<0) ? n*-1 : n;
}

int main (){
	int i, n, res;
	printf("insira 5 valores inteiros:");
	for(i=1;i<=5;i++){
		printf("\n\nn%d = ",i);
		scanf("%d",&n);
		printf("valor absoluto de n%d = %d",i,res=Absoluto(n));
	}
	
	return 0;
}
