#include<stdio.h>

int main () {
	int code, quant;
	float total;
	char *comida;
	
	printf("Qual o codigo do item pedido? ");
	scanf("%d",&code);
	printf("Quantos dele voce deseja? ");
	scanf("%d",&quant);
	
	if ( code < 100 || code > 105){
		printf("Codigo invalido, tente novamente.");
		return 0;
	}
	
	if (code==100){
		total=3.50*quant;
		comida= "cachorro(s) quente(s)";
	}
	else{
		if (code==101){
		total=4.50*quant;
		comida= "bauru(s) simples";
	}
	    else{
	    	if (code==102){
	    	total=5.20*quant;
	    	comida= "bauru(s) com ovo";
	    }
	    else{
	    	if (code==103){
		    total=3*quant;
		    comida= "hamburger(s)";
		}
		else{
			if (code==104){
		    total=4*quant;
		    comida= "cheeseburger(s)";
		}
		else{
			total=2.50*quant;
			comida= "refrigerante(s)";
		}
		}
		}
		}
	}	
	
	
	printf("O valor a ser pago pelo(s) %s sera R$%.2f", comida, total);
	
		return 0;
}
