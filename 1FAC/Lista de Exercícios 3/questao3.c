/*QUEST�O 03:
Implementar um programa que leia um valor
inteiro n1. Se este n�o estiver no intervalo de
100 a 999, uma mensagem deve ser exibida ao
usu�rio informando que o n�mero � inv�lido e,
em seguida, a execu��o do programa terminar�.
Caso o valor esteja no intervalo definido, o

programa dever� criar um novo valor n2 (e exibi-
lo ao final) contendo os mesmos algarismos de

n1, por�m em ordem crescente.
Exemplos:
n1 514
n2 145
n1 929
n2 299
n1 124
n2 124
Nota:
Como definido no enunciado, n1 consiste em um
n�mero inteiro positivo, com 3 algarismos. n2
tamb�m ser� um �nico n�mero!*/

#include<stdio.h>

int main (){
	int n1, dig1, dig2, dig3;

	printf("diga um numero de 100 a 999: ");
	scanf("%d",&n1);
	
	if(n1<100 || n1>999){
		printf("numero invalido, tente novamente.");
		return 0;
	}
	
	dig1 = n1 / 100;
	dig2 = (n1/10) % 10; //eu n lembro pq � assim mas �. pergunta pro professor dps pq esse calculo n faz sentido p mim
	dig3 = n1 % 10;
	
	if(dig1<dig2 && dig1<dig3){
		if(dig2<dig3){
			printf("n1 = %d\nn2 = %d%d%d", n1, dig1, dig2, dig3);
		}
		else{
			printf("n1 = %d\nn2 = %d%d%d", n1, dig1, dig3, dig2);
		}
	}
	else if(dig2<dig1 && dig2<dig3){
		if(dig1<dig3){
			printf("n1 = %d\nn2 = %d%d%d", n1, dig2, dig1, dig3);
		}
		else{
			printf("n1 = %d\nn2 = %d%d%d", n1, dig2, dig3, dig1);
		}
	}

	else if(dig3<dig1 && dig3<dig2){
		if(dig1<dig3){
			printf("n1 = %d\nn2 = %d%d%d", n1, dig3, dig1, dig3);
		}
		else{
			printf("n1 = %d\nn2 = %d%d%d", n1, dig2, dig3, dig1);
		}
	}



	
	
	return 0;
}
