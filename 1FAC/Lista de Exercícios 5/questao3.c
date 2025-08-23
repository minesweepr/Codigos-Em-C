#include<stdio.h>

int main (){
	int n, i;
	
	printf("Insira um numero: ");
	scanf("%d",&n);
	
	printf("divisores de %d: ", n);
	
	for(i=1;i<=n;i++){
		if(n % i == 0){
		printf("%d ", i);	
		}
	}
	
	return 0;
}
