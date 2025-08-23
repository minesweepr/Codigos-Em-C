#include<stdio.h>

int main () {
	int n, n100, n50, n20, n10, n5, n2, n1;
	
	printf("Quantia em reais: R$");
	scanf("%d",&n);
	
	if (n<=0){
		printf("valor invalido, tente novamente.");
		return 0;
	}
	
	if (n>=100){
		n100=n/100;
		n-=(n100*100);
	}
	if (n>=50){
		n50=n/50;
		n-=(n50*50);
	}
    if (n>=20){
		n20=n/20;
		n-=(n20*20);
	}
	if (n>=10){
		n10=n/10;
		n-=(n10*10);
	}
	if (n>=5){
		n5=n/5;
		n-=(n5*5);
	}
	if (n>=1){
		n1=n;
	}
	
    printf("100 = %d\n", n100);
    printf("50 = %d\n", n50);
    printf("20 = %d\n", n20);
    printf("10 = %d\n", n10);
    printf("5 = %d\n", n5);
    printf("2 = %d\n", n2);
    printf("1 = %d\n", n1);
	
	return 0;
}
