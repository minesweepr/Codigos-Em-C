#include<stdio.h>

void calculo(int a, int b){
	int mdc=0, menor, i;
	menor=(a<b) ? a : b;
	
	for(i=1;i<=menor;i++){
		if(a%i==0 && b%i==0){
			mdc=i;
		}
	}
	
	printf("\nMDC: %d", mdc);
}

int main (){
	int a, b;
	printf("insira dois numeros:\na = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	
	calculo(a, b);
	
	return 0;
}
