/*QUEST�O 03: Jo�ozinho investiu Q reais em
uma aplica��o com rendimento fixo de R% ao
m�s. Pede-se a implementa��o de um
programa que calcule o valor (e exiba-o)
dispon�vel na conta de Jo�ozinho ap�s A anos
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


