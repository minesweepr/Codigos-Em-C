/*QUESTÃO 06:
Faça uma função que, dado um vetor de reais,
altere todas as ocorrências do número A pelo
número B.*/
#include<stdio.h>
#define QUANT 5
void aleatorizador (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);
void substituir(int vetor[], int tamanho, int num, int sub);

int main () {
	int vetor[QUANT], num, sub;
	aleatorizador(vetor, QUANT, 10);
	exibir(vetor, QUANT);
	
	printf("\nescolha um numero da sequencia e seu substituto: ");
	scanf("%d %d", &num, &sub);
	
	substituir(vetor, QUANT, num, sub);
	exibir(vetor, QUANT);
	
	return 0;
}
void aleatorizador(int vetor[], int tamanho, int limite){
	int i;
	srand(time(NULL));
	for(i=0;i<tamanho;i++){
		vetor[i]=rand()%limite;
	}
}

void exibir(int vetor[], int tamanho){
	int i;
	printf("vetor: ");
	for(i=0;i<tamanho;i++){
		printf("%d ",vetor[i]);
	}
}

void substituir(int vetor[], int tamanho, int num, int sub){
	int i;
	for(i=0;i<tamanho;i++){
		if(vetor[i]==num){
			vetor[i]=sub;
		}
	}
}
