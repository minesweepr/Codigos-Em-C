/*QUESTÃO 06: Faça um programa que leia um
número N inteiro, menor ou igual a 18. Se for
maior do que 18, o programa exibirá uma
mensagem de erro e terminará a sua
execução; caso contrário, deverá exibir os
números no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir
os números que estão no
intervalo de 1 a 99, cujos
algarismos somam 12. Ou seja:
39, 48, 57, 66, 75, 84 e 93.*/
#include<stdio.h>

int main (){
	int n, i, a, b;

    printf("digite um numero de 1 a 18: ");
    scanf("%d",&n);
    
    if(n<1 || n >18){
    	printf("numero invalido.");
    	return 0;
	}
	
	printf("os numeros que estao no intervalo de 1 a 99, cujos algarismos somam %d sao: ", n);
	
	for(i=1;i<=99;i++){
		a=i/10;
		b=i%10;
		if(a+b==n){
			printf("%d ", i);
		}
		
	}	
	return 0;
}
