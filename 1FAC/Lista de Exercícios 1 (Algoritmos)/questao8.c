#include<stdio.h>
#include<string.h>

int main (){
	int dias;
	char nome[50], apt;
	float consint, subtotal, valord, taxa, subg;
	
	printf("Primeiro nome do hospede: ");
	gets(nome);
	//scanf("%s", nome); é s quando tem mais d um caractere
	printf("Tipo de apartamento(A, B, C ou D): ");
	scanf(" %c",&apt); //eu odeio essa droga d espaço q estraga tudo
	printf("Quantidade de dias hospedado: ");
	scanf("%d",&dias);
	printf("Valor, em reais, do consumo interno: R$");
	scanf("%f",&consint);
	
	if (apt=='A'){
		valord=dias*350;
	}
	else if (apt=='B'){
		valord=dias*275;
	}
	else if (apt=='C'){
		valord=dias*200;
	}
	else if (apt=='D'){
		valord=dias*150;
	}
	else {
		printf("Tipo de apartamento invalido, tente novamente.");
		return 0;
	}
	
	subtotal=consint+valord;
	
	taxa=0.1*subtotal;
	
	subg=subtotal+taxa;
	
	puts(nome); 
	printf("TIPO DE APARTAMENTO: %c\n",apt); //esse \n é quebra linha
	printf("VALOR TOTAL DAS DIARIAS: R$%.2f\n",valord);
	printf("VALOR DO CONSUMO INTERNO: R$%.2f\n",consint);
	printf("SUBTOTAL: R$%.2f\n",subtotal);
	printf("VALOR DA TAXA DE SERVICO: R$%.2f\n",taxa);
	printf("SUBTOTAL GERAL: R$%.2f\n",subg);
	
	return 0;
}
