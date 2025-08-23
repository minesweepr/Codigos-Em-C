#include<stdio.h>

int main () {
	int n, n100, n50, n20, n10, n5, n2, n1;
	
	printf("Quantia em reais: R$");
	scanf("%d",&n);
	
	if (n<=0){
		printf("valor invalido, tente novamente.");
		return 0;
	}
	
	n100=n/100;
	n %= 100;
	
	n50=n/50;
	n %= 50;
	
	n20=n/20;
	n %= 20;
	
	n10=n/10;
	n %= 10;
	
	n5=n/5;
	n %= 5;
	
	n2=n/2;
	n %= 2;
	
	n1=n/1;

	
    printf("100 = %d\n", n100);
    printf("50 = %d\n", n50);
    printf("20 = %d\n", n20);
    printf("10 = %d\n", n10);
    printf("5 = %d\n", n5);
    printf("2 = %d\n", n2);
    printf("1 = %d\n", n1);
	
	return 0;
}
