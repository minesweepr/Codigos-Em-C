#include<stdio.h>
#define QUANT 150

int main (){
	int i;
	float num, soma=0, menornum=2000, ultims=0, media;
	
	for(i=1;i<=QUANT;i++){
		printf("%d. insira um numero real: ", i);
		scanf("%f",&num);
		
		if(i<=50){
			soma+=num;
		}
		else{
			if(i<=100){
				if(menornum>num){
					menornum=num;
				}	
			}
			else{
				ultims+=num;
			}
		}
	}
	
	printf("\nRESULTADOS...\nsoma dos 50 primeiros valores: %.2f\n", soma);
	printf("menor numero entre o 51 ao 100 valor fornecido: %.2f\nmedia entre os 50 ultimos valores: %.2f", menornum, media=ultims/50);
	
	return 0;
}
