#include<stdio.h>
#define QUANT 300

int main (){
	int i, kds, quantsal=0, salalto=0, totalkds=0, mediakds;
	float sal, saltod=0, mediasal, maiorsal=0, percent;

	for(i=1;i<=QUANT;i++){
		printf("\nHABITANTE %d...\ninsira seu salario: R$", i);
		scanf("%f",&sal);
		printf("numero de filhos: ");
		scanf("%d",&kds);
		
		saltod+=sal;
		
		totalkds+=kds;
		
		if(sal>maiorsal){
			maiorsal=sal;
		}
		if(sal>=1000){
			salalto++;
			quantsal++;
		}
		else{
			quantsal++;
		}
	}
	mediakds=totalkds/QUANT;
	mediasal=saltod/quantsal;
	percent=((float)salalto/quantsal)*100;
	
	printf("\nRESULTADOS...\nmedia salarial: R$%.2f\nmedia de filhos: %d", mediasal, mediakds);
	printf("\nmaior salario: R$%.2f\npercentual de pessoas com salario ate R$1000,00: %.2f%%", maiorsal, percent);
	
	return 0;
}
