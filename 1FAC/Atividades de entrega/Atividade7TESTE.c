/*Dado um vetor contendo números reais, desenvolver uma função que determine o maior valor do vetor inferior à
média de seus elementos, assim como o menor que seja superior a esta média.
Nota: apresentar a main chamando a função implementada.*/
//ARQUIVO TESTE NAO FUNCIONANDO
#include<stdio.h>
#include <limits.h>
int checarvetor(int n, int *menor, int vetor[], int i, int soma);

int main (){
	int n, menor=INT_MAX, res, i, vetor[n], soma=0;
	printf("dimensao do vetor: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("posicao %d: ",i);
		scanf("%d",&vetor[i]);
		soma+=vetor[i];
	}
	
	printf("\nmaior valor inferior a media: %d", res=checarvetor(n, &menor, vetor, i, soma));
	printf("\nmenor valor superior a media: %d", menor);
	
	return 0;
}

int checarvetor(int n, int *menor, int vetor[], int i, int soma){
	int maior=INT_MIN;
	float media;
	
	for(i=0;i<n;i++){
		printf("posicao %d: ",i);
		scanf("%d",&vetor[i]);
		soma+=vetor[i];
	}
	media=(float)soma/n;
	
	for(i=0;i<n;i++){
		if(vetor[i]>media){
			*menor=(vetor[i]<*menor)?vetor[i]:*menor;
		}
		else{
			maior=(vetor[i]>maior)?vetor[i]:maior;
		}
	}

    return maior;
	
}
