#include<stdio.h>

int main (){
	int i, quant, peso, tdpeso=0;
	float elmnts, result, plm=0;
	
	printf("insira a quantidade de elementos: ");
	scanf("%d",&quant);
	for(i=1;i<=quant;i++){
		printf("\nelemento %d: ", i);
		scanf("%f",&elmnts);
		printf("peso do elemento %d: ", i);
		scanf("%d",&peso);
		
		plm+=(peso*elmnts);
		tdpeso+=peso;
	}
	
	printf("media ponderada dos elementos: %.2f", result=plm/tdpeso);
	
	return 0;
}
