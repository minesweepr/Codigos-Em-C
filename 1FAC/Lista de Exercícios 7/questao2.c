/*QUESTÃO 02: Um fazendeiro realizou um
tratamento sobre sua plantação de café
que gerou um crescimento constante de C
% em sua produção, por ano.
Considerando que atualmente sua
produção anual seja de M u.p.,
implementar um programa que determine
a quantidade de anos necessária para que
a produção duplique.*/

#include<stdio.h>

int main (){
	int ano=0, M, i=0, prod;
	float C;
	
	printf("Producao anual: ");
	scanf("%d",&M);
	printf("Crescimento porcentual: %%");
	scanf("%f",&C);
	
	prod=M;
	
	while(M<prod*2){
		M+=M*(C/100);
		i++;
	}
	printf("A producao se duplicara em %d anos", i);
	
	return 0;
}
