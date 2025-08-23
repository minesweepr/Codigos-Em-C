/*Desenvolver uma função que, dado um número
inteiro N, calcule o valor do seguinte
somatório:*/
#include<stdio.h>
#include<math.h>
float calculo (int n){
	int i, j, div=1;
	float parte1, soma=1;
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++){
			div*=j;
		}
		parte1=pow(n-i,i)/div;
	    soma+=parte1;
	}
	//quando nao pede pra exibir, é pra exibir fora da função
	return soma;
}
int fatorial(int n);
int subtracao_potencia(int n);
int soma(int n);

int main (){
	int n;
	float s;
	printf("insira um numero N: ");
	scanf("%d",&n);
	
	printf("teste %.1f",s=soma(n));
	
	return 0;
}

int fatorial(int n){
	int
	
}
int subtracao_potencia(int n){
}
int soma(int n){
	
}

//versao 3 funcoes e prototipo
