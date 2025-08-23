#include<stdio.h>

void calculo (int a, int b){
	int i, maior, mmc=1;
	
	maior=(a>b) ? a : b;
	
	for(i=2;i<=maior;i++){
		while (a%i==0 || b%i==0){
			
			if(a%i==0){
				a=a/i;
			}
			if(b%i==0){
				b=b/i;
			}
			mmc*=i;
		}	
	}
	
	/*pedir pro professor fzer a parte do calculo*/
	
	printf("\nMMC = %d", mmc);
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
