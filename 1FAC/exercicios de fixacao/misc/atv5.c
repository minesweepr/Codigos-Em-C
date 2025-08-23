/*Fazer uma função que, dados dois números inteiros num1 e num2, determine se num2 é uma potência de num1.
Nota: apresentar a main chamando a função implementada.*/
#include<stdio.h>
int potencia (int num1, int num2);

int main (){
	int num1, num2;
	printf("insira dois numeros: ");
	scanf("%d %d", &num1, &num2);
	
	printf("%d %s %d", num2, (potencia(num1, num2)==1) ? "e potencia de" : "nao e potencia de", num1);
	
	return 0;
}

int potencia (int num1, int num2){
	int i=num1;
	while(i<num2){
		i*=num1;
	}
	return (i==num2) ? 1 : 0;
}
