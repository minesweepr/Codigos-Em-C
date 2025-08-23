#include<stdio.h>

void calculo (int n){
	int i, j;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j!=i){
				printf("(%d %d) ", i, j);
			}
		}
	}
}

int main (){
	int n;
	printf("insira um numero:\nn = ");
	scanf("%d",&n);
	
	calculo(n);
	
	return 0;
}
