#include<stdio.h>

int main (){
	int M, prod, i=0;
	float C;
	
	printf("crescimento porcentual: %%");
	scanf("%f",&C);
	printf("producao anual: ");
	scanf("%d",&M);
	
	prod=M;
	while(M<prod*2){
		M+=M*(C/100);
		i++;
	}
	printf("a producao duplicara em %d anos.", i);
	
	return 0;
}
