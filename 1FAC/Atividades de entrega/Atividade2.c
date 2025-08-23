#include<stdio.h>

int main (){
	int n1, n2, i, cont=0;
	
	printf("insira dois valores sendo n1 menor que n2...\nn1: ");
	scanf("%d",&n1);
	printf("n2: ");
	scanf("%d",&n2);
	
	
	printf("numeros exibidos: ");
	for(i=n1;i<n2;i++){
		printf("%d ", i );
		
		i+=cont;
		cont++;
		
	}
	
	printf("\na quantidade de numeros exibidos foi: %d", cont);
	
	return 0;
}
