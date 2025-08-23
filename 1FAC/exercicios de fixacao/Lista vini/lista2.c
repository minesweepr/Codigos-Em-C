#include<stdio.h>
void calculo (){
	int i, n, count=0;
	printf("insira 10 numeros inteiros:\n");
	for(i=1;i<=10;i++){
		printf("n%d = ", i);
		scanf("%d",&n);
		if(n%2!=0){
			count++;
		}
	}
	printf("\nquantidade de numeros impares: %d", count);
}

int main (){
	calculo();
	
	return 0;
}
