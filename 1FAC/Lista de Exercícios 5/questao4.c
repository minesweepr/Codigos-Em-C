#include<stdio.h>

int main (){
	int n, n1, r, i, PA;
	
	printf("progressao aritmetica\ninsira o primeiro numero(n1): ");
	scanf("%d",&n1);
	printf("insira a razao(r): ");
	scanf("%d",&r);
	printf("insira o numero de termos: ");
	scanf("%d",&n);
	
	printf("\nn1: %d\nr: %d\nptermos da PA: ",n1, r);
	
	for(i=1;i<=n;i++){
		PA=n1+(i-1)*r;
		printf("%d ", PA);
	}
	
	return 0;
}
