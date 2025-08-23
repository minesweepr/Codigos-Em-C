/*Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.*/
#include<stdio.h>

int calculo (int n){
	int resp, n1=0, n2=1, i;
	if(n<=2){
		return (n-1);
	}
	else{
		for(i=3;i<=n;i++){
			resp=n1+n2;
			n1=n2;
			n2=resp;
		}
	}
	return resp;
}

int main(){
	int n, resp;
	printf("insira o n-esimo termo da sequencia de fibonacci: ");
	scanf("%d",&n);
	
	resp=calculo(n);
	printf("%d",resp);
	
	return 0;
}
