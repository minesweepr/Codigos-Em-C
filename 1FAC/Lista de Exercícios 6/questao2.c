#include<stdio.h>

int main (){
	int quant, i, val, maiorval=0, menorval=5000;
	
	printf("insira a quantidade de valores que deseja: ");
	scanf("%d",&quant);
	for(i=1;i<=quant;i++){
		printf("%d. insira um valor: ", i);
		scanf("%d",&val);
		
		if(val>maiorval){
			maiorval=val;
		}
		
		if(menorval>val){
			menorval=val;
		}
	}
	
	printf("\nmaior: %d\nmenor: %d", maiorval, menorval);
	
	return 0;
}
