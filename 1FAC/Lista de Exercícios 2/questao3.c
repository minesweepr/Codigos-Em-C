#include<stdio.h>
#include<math.h>

int main () {
	float preco, vistad, p5, p10;
	
	printf("Qual o preco do produto?");
	scanf("%f", &preco);
	
	vistad= preco - (preco*0.1);
	
	p5= preco/5;
	
	p10= (preco*1.2)/10;
	
	printf("Valor com 10 porcento de desconto a vista: %f", vistad);
	printf("Valor parcelado em 5x sem juros: %f", p5);
	printf("Valor parcelado em 10x com juros e 20 porcento de acrescimo no valor original: %f", p10);
	
	return 0;
}
