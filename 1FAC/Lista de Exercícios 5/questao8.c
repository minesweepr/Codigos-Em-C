/*Fazer um programa que auxilie o órgão
regulador no cálculo do total de recursos
arrecadados com a aplicação de multas de
trânsito.
O programa deve ler as seguintes
informações para cada motorista:
? O número da carteira de motorista;
? Número de multas;
? Valor de cada uma das multas.
Deve ser exibido o valor da dívida de cada
motorista e ao final da leitura o total de
recursos arrecadados (somatório de todas
as multas). O programa também deverá
apresentar o número da carteira do
motorista que obteve o maior número de
multas.*/
#include<stdio.h>

int main (){
	int carteira, maiorcar=0, multas, mot, i;
	float valor=0, resultado=0, total=0, maiormul=0;
	
	for(mot=1;mot<=5;mot++){
	printf("\nMOTORISTA %d\ninsira o numero da carteira de motorista: ", mot);
	scanf("%d",&carteira);
	printf("insira a quantidade de multas: ");
	scanf("%d",&multas);
	
	for(i=1;i<=multas;i++){
		printf("insira o valor da sua multa numero %d: R$", i);
		scanf("%f",&valor);
		resultado+=valor;
	}
	total+=resultado;
	printf("\ntotal de multa do motorista %d: R$%.2f\n", mot, resultado);
	resultado=0;
	
	if(maiormul<multas){
			maiormul=multas;
			maiorcar=carteira;
		}
    }
	printf("\nTOTAL DE RECURSOS ARRECADADOS: R$%.2f\nCARTEIRA DO MOTORISTA COM MAIOR NUMERO DE MULTAS: %d", total, maiorcar);
	
	return 0;
}
