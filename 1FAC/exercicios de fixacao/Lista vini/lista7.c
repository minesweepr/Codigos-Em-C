/*Escreva um programa que contenha uma função para calcular o desconto de um produto e outra
função para calcular o valor total da venda. A primeira função deve receber como parâmetros o valor
do produto e a porcentagem do desconto e retornar o novo preço do produto. A segunda função
deve receber como parâmetro a quantidade e calcular o preço total já com o desconto. O programa
deve apresentar o preço original do produto, o desconto e o valor total da venda*/
#include<stdio.h>
float newres (float percent, float valor){
	return valor*(percent/100);
}

float total (int quant, float percent, float valor){
	float novopreco=newres(percent,valor);
	return quant*(valor-novopreco);
}

int main (){
	int quant;
	float percent, valor, desconto, valortotal ;
	printf("insira o valor do seu produto: R$");
	scanf("%f",&valor);
	printf("insira o desconto do produto: %%");
	scanf("%f",&percent);
	printf("insira a quantidade do produto: ");
	scanf("%d",&quant);
	
	printf("\n\nRESULTADOS...\npreco original: R$%.2f\ndesconto: R$%.2f\nvalor total: R$%.2f",valor,desconto=newres(percent, valor),valortotal =total(quant, percent, valor) );
	
	return 0;
}
