/*QUEST�O 06: Fa�a um programa que leia um
n�mero N inteiro, menor ou igual a 18. Se for
maior do que 18, o programa exibir� uma
mensagem de erro e terminar� a sua
execu��o; caso contr�rio, dever� exibir os
n�meros no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir
os n�meros que est�o no
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
