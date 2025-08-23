/*Escreva um programa que leia 5 números inteiros positivos (utilize uma
função que leia esse número e verifique se ele é positivo). Para cada
número informado escrever a soma de seus divisores (exceto ele mesmo).
Utilize a função SomaDivisores para obter a soma.
Nome: SomaDivisores
Descrição: Calcula a soma dos divisores do número informado (exceto
ele mesmo).
Entrada: Um número inteiro e positivo.
Saída: A soma dos divisores.
Exemplo: Para o valor 8: 1+2+4 = 7*/
#include<stdio.h>

int pos (int n){
	return (n<0) ? 1:0;
}

int SomaDivisores(int n, int checar){
	int i, soma=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			soma+=i;
		}
	}
	return soma;
}

int main (){
	int i, n, checar, res;
	printf("insira 5 valores inteiros positivos:");
	for(i=1;i<=5;i++){
		printf("\n\nn%d = ",i);
		scanf("%d",&n);
		
		checar=pos(n);
		if(checar==1){
			printf("o valor deve ser positivo.");
		}
		else{
			printf("soma dos divisores: %d",res=SomaDivisores(n,checar));
		}
	}
	
	return 0;
}

