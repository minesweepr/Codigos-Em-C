/*Dado um vetor contendo n�meros reais, desenvolver uma fun��o que determine o maior valor do vetor inferior �
m�dia de seus elementos, assim como o menor que seja superior a esta m�dia.
Nota: apresentar a main chamando a fun��o implementada.*/
#include<stdio.h>
#include <limits.h>//descobri sobre essa biblioteca durante minha besquisa hoje. seria ok usar ela?
int checarvetor(int n, int *menor);

int main (){
	int n, menor=INT_MAX, res;
	printf("dimensao do vetor: ");
	scanf("%d",&n);
	
	printf("\nmaior valor inferior a media: %d", res=checarvetor(n, &menor));
	printf("\nmenor valor superior a media: %d", menor);
	
	return 0;
}

int checarvetor(int n, int *menor){
	int i, vetor[n], soma=0, maior=INT_MIN;
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
