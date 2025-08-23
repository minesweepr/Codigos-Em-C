/*3. Escreva uma função potencia(base, expoente) que, quando chamada,
retorna base^expoente. Por exemplo, potencia(3, 4) deve retornar 81. Assuma
que expoente é um inteiro maior ou igual a 1.*/

#include<stdio.h>
#include<math.h>
int potencia (int b, int ex){
	return pow(b,ex);
}

int main (){
	int b, ex, res;
	printf("insira a base e o expoente: ");
	scanf("%d %d",&b,&ex);
	
	printf("\nresultado: %d",res=potencia(b,ex));
	
	return 0;
}
