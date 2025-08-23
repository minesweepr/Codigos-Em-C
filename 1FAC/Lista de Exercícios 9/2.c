/*Dados dois números inteiros A e B, fazer uma
função que determine o número de potências
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas.*/
#include<stdio.h>
#include<math.h>
void potencia (int a, int b, int *cont, int *maior){
	int i=1, pot=2;
		while(pot<=b){
			if(pot>=a){
				(*cont)++;
				*maior=(*maior>pot)?*maior:pot;
			}
			i++;
			pot=pow(2,i);
		}
}

int main (){
	int a, b, cont=0, maior=0;
	printf("insira dois numeros inteiros A e B:\nA = ");
	scanf("%d",&a);
	printf("B = ");
	scanf("%d",&b);
	
	potencia(a,b,&cont,&maior);
	printf("teste cont %d maior %d",cont,maior);//ignorar isso
	
	return 0;
}
