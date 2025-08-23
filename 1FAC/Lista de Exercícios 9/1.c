/*Desenvolver uma fun��o que, dado um n�mero
inteiro n, exiba todos os n�meros existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem m�ltiplos de n.*/
#include <stdio.h>
void intervalo(int n, int a, int b){
	int i;
	printf("intervalo (%d, %d) exceto multiplos de %d: ", a, b, n);
	for(i=a;i<=b;i++){
		if(i%n!=0){
			printf("%d ", i);
		}
	}
}

int main (){
	int n, a, b;
	printf("insira um numero inteiro\nn = ");
	scanf("%d",&n);
	printf("exiba um intervalo, sendo a < b: ");
	scanf("%d %d",&a,&b);
	
	intervalo(n, a, b);
	
	return 0;
}
