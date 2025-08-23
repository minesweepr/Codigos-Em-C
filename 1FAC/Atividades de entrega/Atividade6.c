/*Desenvolver uma função que, dado um número inteiro n, determine o seu maior algarismo, assim como o menor.
Nota: apresentar a main chamando a função implementada.*/
#include<stdio.h>
int algarismos (int num, int *maior){
	int menor=10, alg;
	do{
		alg=num%10;
		num/=10;
		*maior=(alg>*maior)?alg:*maior;
		menor=(alg<menor)?alg:menor;
		
	}while(num>0);
	return menor;
}
int main (){
	int num, maior=0, res;
	printf("insira um numero inteiro: ");
	scanf("%d",&num);
	
	printf("\nmaior algorismo: %d\nmenor algorismo: %d", maior,res=algarismos(num,&maior));
}
