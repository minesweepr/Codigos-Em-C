/*A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3^4 = 81,
podemos então afirmar que log3^81 = 4.
Generalizando, temos que:
base^expoente = pot <-> logbasepot = expoente
Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados a e
b, calcule o valor de logab.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada
do logaritmo.*/
#include<stdio.h>
#include<math.h>
int logaritimo (int a, int b){
		int i=0, res;
		do{
			i++;
			res=pow(a,i);
		}while(res!=b);
		return i;
}

int main(){
	int a, b, res;
	printf("insira dois numeros: ");
	scanf("%d %d",&a,&b);
	
	printf("valor do log = %d",res=logaritimo(a,b));
	
	return 0;
}

