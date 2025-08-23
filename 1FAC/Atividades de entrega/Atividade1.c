#include<stdio.h>

int main (){
	int n1, n2, a, b, c, d, e, f, maior1, maior2, resultado;
	
	printf("digite dois numeros reais entre 1 a 999...\nn1: ");
	scanf("%d",&n1);
	printf("n2: ");
	scanf("%d",&n2);
	
	if(n1<1 || n1>999 || n2<1 || n2>999){
		printf("numero invalido, tente novamente.");
		return 0;
	}
	
	a=n1/100;
	b=(n1/10) % 10;
	c=n1 % 10;
	
	d=n2/100;
	e=(n2/10) % 10; 
	f=n2 % 10;
	
	if (a>b && a>c){
		maior1=a;
	}
	else{
		if (b>c){
			maior1=b;
		}
		else{
			maior1=c;
		}
	}
	
	if (d>e && d>f){
		maior2=d;
	}
	else{
		if (e>f){
			maior2=e;
		}
		else{
			maior2=f;
		}
	}
	
	if(maior2>maior1){
		resultado=maior2-maior1;
	}
	else{
		resultado=maior1-maior2; 
	}
	
	printf("maior algorismo de n1: %d\nmaior algorismo de n2: %d\ndiferenca igual a %d, sendo o resultado o maior algorismo menos o menor algorismo.", maior1, maior2, resultado);
	
	return 0;
}
