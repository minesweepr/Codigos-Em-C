#include<stdio.h>

int main () {
	int n;
	
	printf("Insira a idade:");
	scanf("%d",&n);
	
	if (n<0){
		printf("Idade invalida, tente novamente");
		return 0;
	}
	
	if (n>=18){
		printf("adulto");
	}
	else if (n>=14){
		printf("juvenil B");
	}
	else if (n>=11){
		printf("juvenil A");
	}
	else if(n>=8){
		printf("infantil C");
	}
	else if(n>=5){
		printf("infantil B");
	}
	else {
		printf("infantil A");
	}
	
	return 0;
}
