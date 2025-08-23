/*QUESTÃO 06:
Faça uma função que, dado um vetor de reais,
altere todas as ocorrências do número A pelo
número B.*/
#include<stdio.h>
#define QUANT 5
void aleatorizador (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);
void substituir (int vetor [], int tamanho, int A, int B);
int main (){
	int vetor[QUANT], A, B;
	printf("vetor = ");
	aleatorizador(vetor, QUANT, 20);
	exibir(vetor, QUANT);
	printf("\n\ninsira o numero do vetor que deseja substituir e seu substituto: ");
	scanf("%d %d", &A, &B);
	
	printf("vetor atualizado = ");
	substituir (vetor, QUANT, A, B);
	exibir(vetor, QUANT);
	
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
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}

void substituir (int vetor [], int tamanho, int A, int B){
	int i;
	for(i=0;i<tamanho;i++){
		if(vetor[i]==A){
			vetor[i]=B;
		}
	}
}




