#include<stdio.h>
#define QUANT 5

int main (){
	int intr, i, quant=0;
	float real, sub, ad, num;
	
	printf("insira um numero real: ");
	scanf("%f",&real);
	printf("insira um numero inteiro: ");
	scanf("%d",&intr);
	
	sub=real-intr;
	ad=real+intr;
	
	for(i=1;i<=QUANT;i++){
		printf("%d. insira um numero real: ", i);
		scanf("%f",&num);
		if(num>=sub && i<=num){
			quant++;
		}
	}
	
	printf("\nRESULTADO...\n a quantidade de numeros reais no intervalo [%.2f, %.2f] e: %d", sub, ad, quant);
	return 0;
}
