/*QUEST�O 02: Um fazendeiro realizou um
tratamento sobre sua planta��o de caf�
que gerou um crescimento constante de C
% em sua produ��o, por ano.
Considerando que atualmente sua
produ��o anual seja de M u.p.,
implementar um programa que determine
a quantidade de anos necess�ria para que
a produ��o duplique.*/

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
