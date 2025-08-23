#include<stdio.h>

/*Fazer um algoritmo que determine a ordem de
uma data (dia e mês) no ano.
Exemplos:
01/01 - 1o dia do ano
03/02 - 34o dia do ano

ver dps q aprender loops*/

int main () {
	int dia, mes, i, diaano=0;
	int diameses[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	printf("Digite o dia: ");
	scanf("%d",&dia);
	printf("Digite o mes: ");
	scanf("%d",&mes);
	
	if(mes>1){
		for(i=1;i<mes;i++){
			diaano=diaano+diameses[i];
		}
	}
	diaano=diaano+dia;
	printf("%d dia do ano", diaano);
	
	return 0;
}
