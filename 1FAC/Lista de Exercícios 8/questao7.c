#include<stdio.h>
void calculo (int a, int b, int n){
	int resp=0, i, j;
	
	for(i=a;i<=b;i++){
		for(j=2;j<=n;j++){
			if(n%j==0 && i%j==0){
				resp++;
				break; //lembrar disso
			}
		}
	}
	printf("\nresposta = %d", resp);
	
}

int main (){
	int a, b, n;
	printf("insira tres numeros, sendo a e b um intervalo:\nn = ");
	scanf("%d",&n);
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	
	calculo(a,b,n);
	
	return 0;
}
