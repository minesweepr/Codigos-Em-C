#include<stdio.h>

int main () {
	int n, i; 
	
	printf("Insira um numero: ");
	scanf("%d",&n);
	
	printf("numeros pares iguais ou inferiores a N: ");
	for(i=1;i<=n;i++){
		if(i%2 == 0){
			printf("%d ", i);
		}
	}
	
	return 0;
}
