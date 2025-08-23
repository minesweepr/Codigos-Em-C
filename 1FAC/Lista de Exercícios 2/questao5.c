#include<stdio.h>

int main () {
	int code, quant;
	float total;
	
	printf("Qual o codigo do item pedido?");
	scanf("%d",&code);
	printf("Quantos dele voce deseja?");
	scanf("%d",&quant);
	
	if ( code < 100 || code > 105){
		printf("Codigo invalido, tente novamente.");
		return 0;
	}
	
	
	
	if (code==100){
		total=3.50*quant;
		printf("O valor a ser pago pelo(s) cachorro(s) quente(s) sera R$%f",total);
	}
	else if (code==101){
		total=4.50*quant;
		printf("O valor a ser pago pelo(s) bauru(s) simples sera R$%f",total);
	}
	else if (code==102){
		total=5.20*quant;
		printf("O valor a ser pago pelo(s) bauru(s) com ovo sera R$%f",total);
	}
	else if (code==103){
		total=3*quant;
		printf("O valor a ser pago pelo(s) hamburger(s) sera R$%f",total);
	}
	else if (code==104){
		total=4*quant;
		printf("O valor a ser pago pelo(s) cheeseburger(s) sera R$%f",total);
	}
	else {
		total=2.50*quant;
		printf("O valor a ser pago pelo(s) refrigerante(s) sera R$%f",total);
	}
	
	return 0;
}
