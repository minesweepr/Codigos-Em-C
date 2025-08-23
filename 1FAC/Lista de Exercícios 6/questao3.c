#include<stdio.h>
#include<math.h>

int main (){
	int base, exp, result;
	
	printf("insira um valor inteiro para a base: ");
	scanf("%d",&base);
	printf("insira um valor inteiro para o expoente: ");
	scanf("%d",&exp);
	
	printf("resultado: %d", result=pow(base,exp));
	
	return 0;
}
