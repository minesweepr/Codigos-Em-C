/*QUESTÃO 03: Joãozinho investiu Q reais em
uma aplicação com rendimento fixo de R% ao
mês. Pede-se a implementação de um
programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A anos
de investimento.*/
#include<stdio.h>

int main (){
	int meses, i;
	float Q, rend, resultado, A;
	
	printf("valor investido: R$");
	scanf("%f",&Q);
	printf("rendimento (porcentagem): %");
	scanf("%f",&rend);
	printf("ano(s) de investimento: ");
	scanf("%f",&A);
	
	meses=A*12;
	
	for(i=1;i<=meses;i++){
	resultado = (rend/100)*Q;
	Q=Q+resultado;
	}
	
	printf("depois de %.1f anos, sua conta tera R$%.2f", A, Q);
	
	return 0;
}


