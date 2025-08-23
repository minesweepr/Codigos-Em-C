/*QUESTÃO 01:
Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.*/
#include<stdio.h>
void aleatorizador (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);
int ocorrencias (int vetor[], int tamanho, int n);

int main (){
	int n, vetor[5], resp;
	
	aleatorizador (vetor, 5, 9);
	exibir (vetor, 5);
	
	printf("\ninsira um numero: ");
	scanf("%d",&n);
	
	printf("\no numero %d foi encontrado %d veze(s) no vetor A.", n, ocorrencias(vetor, 5, n));
	
	return 0;
}

void aleatorizador (int vetor[], int tamanho, int limite){
	int i;
	srand(time(NULL));
	for(i=0;i<tamanho;i++){
		vetor[i]=rand()%limite;
	}
}

void exibir (int vetor[], int tamanho){
	int i;
	printf("elementos do vetor A: ");
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}

int ocorrencias (int vetor[], int tamanho, int n){
	int i, cont=0;
	for(i=0;i<tamanho;i++){
		if(vetor[i]==n){
			cont++;
		}
	}
	return cont;
}
