#include<stdio.h>
/*
Quest�o 01 [2,5 pontos]:
Implementar uma fun��o que, dado um n�mero inteiro n, exiba uma sequ�ncia de n�meros conforme ilustrado nos exemplos a seguir.
Exemplos:
n=3
n=5
123121
123451234123121*/
void numeros (int n);

int main (){
	int n;
	printf("insira um numero:\nn = ");
	scanf("%d",&n);
	
	numeros(n);
	
	return 0;
}

void numeros (int n){
	int i, j;
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d ", j);
		}
	}
}
