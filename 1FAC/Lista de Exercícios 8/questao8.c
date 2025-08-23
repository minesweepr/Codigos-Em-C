#include<stdio.h>
void calculo (int n){
	int i, j, primo;
	
	for(i=2;i<=n;i++){
		primo=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				primo++;
		   }
			if(primo>2){
				break;
			}
			
		}
		if(primo==2){
			printf("%d ", i);
		}
	}
}



int main (){
	int n;
	printf("insira um valor:\nn = ");
	scanf("%d",&n);
	
	printf("\nnumeros primos inferiores a %d: ", n);
	calculo(n);
	
	return 0;
}
