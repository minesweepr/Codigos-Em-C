/*Quest�o 04:
Fazer uma fun��o recursiva que, dado um
n�mero inteiro N, exiba o mesmo na base 2
(bin�ria).*/
#include<stdio.h>
#include<stdlib.h>

void binario (int n);

int main (){
	int n;
	printf("insira um numero: ");
	scanf("%d", &n);
	
	printf("\nem binario: ");
	binario(n);
	
	return 0;
}

void binario (int n){
	if(n>0){
		binario(n/2);
    	printf("%d", n%2);
	}
}
