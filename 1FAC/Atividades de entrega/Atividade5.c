/*Fazer uma fun��o que, dados dois n�meros inteiros num1 e num2, determine se num2 � uma pot�ncia de num1.
Nota: apresentar a main chamando a fun��o implementada.*/
#include<stdio.h>
int potencia(int num1, int num2){
	int i=num1;
    while(i<num2){
		i*=num1;
	}
	return (i==num2) ? 1 : 0;
	}
	

int main (){
	int num1, num2, res;
	printf("insira dois numeros inteiros: ");
	scanf("%d %d",&num1,&num2);
	
	res=potencia(num1, num2);
	printf("\n%d %s %d", num2, (res == 1) ? "e potencia de" : "nao e potencia de", num1); /*sei que nao demos string ainda, mas esse esta de uma forma bem basica. estaria permitido usar desse jeito? 
	caso o contrario, eu s� usaria if else mesmo.*/
	return 0;
}

