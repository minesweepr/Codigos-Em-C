#include<stdio.h>
#include<math.h>

int main () {
	float custoF, prcntD, impostos, CC;
	
	printf("Custo de fabrica:");
	scanf("%f",&custoF);
	printf("Porcentagem do distribuidor:");
	scanf("%f",&prcntD);
	printf("Impostos:");
	scanf("%f",&impostos);
	
	CC=custoF+(custoF*(prcntD/100))+(custoF*(impostos/100));
	
	printf("O custo do consumidor sera de R$%f",CC);
	
	return 0;
}
