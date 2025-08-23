#include<stdio.h>

int main (){
	int n, i, soma=0; 
	
	printf("Insira um numero: ");
	scanf("%d",&n);
	
	printf("soma dos numeros de 1 a %d: ", n);
	for(i=0;i<=n;i++){
		soma+=i;
	}
	
	printf("%d", soma);
	
	return 0;
}
