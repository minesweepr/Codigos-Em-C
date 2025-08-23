#include<stdio.h>

int main (){
	float km, kmporl, precol, precototal, combcons;
	
	printf("Qual o percurso, em quilometros, da viagem?");
	scanf("%f",&km);
	printf("Qual o numero de quilometros que o carro percorre com 1L de combustivel?");
	scanf("%f",&kmporl);
	printf("Qual o preco do litro do combustivel?");
	scanf("%f",&precol);
	
	combcons=km/kmporl;
	precototal=precol*combcons;
	
	printf("A quantidade de combustivel, em litros, consumida durante a viagem sera de %f",combcons);
	printf("O custo total do combustivel sera de %f",precototal);
	
	return 0;
}
