/*8. Escreva uma fun��o que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade
expressa em dias. Leve em considera��o que todos os meses possuem 30 dias e que a pessoa j�
comemorou anivers�rio no ano corrente.*/
#include<stdio.h>
int calculo(int ano, int mes, int dia){
	return (ano*360)+(mes*30)+dia;
}

int main (){
	int ano, mes, dia, res;
	printf("insira sua idade em anos meses e dias: ");
	scanf("%d %d %d",&ano,&mes,&dia);
	
	printf("\nsua idade em dias: %d",res=calculo(ano,mes,dia));
	
	return 0;
}
