#include<stdio.h>

int main (){
	int numrs, n, parsoma=0, impro=1, i;
	
	printf("quantos numeros inteiros voce deseja inserir? ");
	scanf("%d",&numrs);
	
	for(i=1;i<=numrs;i++){
		printf("insira %d numero: ", i);
		scanf("%d",&n);
		
		if(n % 2 == 0){
			parsoma+=n;
		}
		else{
			impro*=n;		
			}
			
	}
	
	printf("\nsoma dos numeros pares: %d\nproduto dos numeros impares: %d", parsoma, impro);
	
	
	
	return 0;
}
