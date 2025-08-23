/*QUESTÃO 02:
Implementar uma função que, dado um vetor
de reais, troque o 1? e o 2? elementos, em
seguida o 3? e o 4? elementos e assim
sucessivamente, até se chegar ao final do vetor.*/
#include<stdio.h>
void aleatorizador (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);
void troca (int vetor[], int tamanho);

int main (){
	int vetorA[6];
	
	aleatorizador(vetorA, 6, 10);
	exibir(vetorA, 6);
	
	printf("\nvetor atualizado: ");
	troca(vetorA, 6);
	exibir(vetorA, 6);
	
	
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

void troca (int vetor[], int tamanho){
	int i, j, temp;
	for(i=0, j=1;i<tamanho;i+=2, j+=2){
		temp=vetor[i];
		vetor[i]=vetor[j];
		vetor[j]=temp;
	}
}


