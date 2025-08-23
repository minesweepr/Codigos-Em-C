#include<stdio.h>
int checar (int n, int n2){
	return (n>n2) ? 1 : 0;
}

int main (){
	int n, n2, res;
	printf("insira dois valores:\nn1 = ");
	scanf("%d",&n);
	printf("n2 = ");
	scanf("%d",&n2);
	
	
	res=checar(n, n2);
	if(res==1){
		printf("%d e maior que %d",n,n2);
	}
	else{
		printf("%d e maior que %d",n2,n);
	}
	
	return 0;
}
