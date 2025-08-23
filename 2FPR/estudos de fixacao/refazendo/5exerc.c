/*Quest�o 05:
Pede-se a implementa��o de uma fun��o
recursiva que exiba os n primeiros termos de
uma PG (Progress�o Geom�trica), onde a1 � o
seu primeiro termo e q a raz�o.
Observa��o: uma PG consiste em uma
sequ�ncia de valores, iniciadas pelo valor a1. Os
demais elementos s�o definidos como o
anterior multiplicado pela raz�o.*/
#include<stdio.h>
#include<stdlib.h>
void pg (int a1, int q, int n);

int main (){
	int a1, q, n;
	printf("formula PG: An = A1 . Q^n-1\nagora insira, respectivamente, o primeiro termo, a razao e o total de termos: ");
	scanf("%d %d %d", &a1, &q, &n);
	
	printf("\nsua PG: ");
	pg(a1, q, n);
	
	return 0;
}

void pg (int a1, int q, int n){
	if(n){
		printf("%d ", a1);
		pg(a1*q, q, n-1);
	}
}
