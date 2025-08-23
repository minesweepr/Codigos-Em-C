/*Implementar uma função que, dado um vetor
de reais, troque o 1o e o 2o elementos, em
seguida o 3o e o 4o elementos e assim
sucessivamente, até se chegar ao final do vetor.*/
#include<stdio.h>
void aleatorizador(int vetor[], int tamanho, int limite);
void exibir(int vetor[], int tamanho);
void trocadeelementos(int vetor[], int tamanho);

int main (){
	int vetor[10];
	aleatorizador(vetor, 10, 10);
	printf("elementos do vetor: ");
	exibir(vetor, 10);
	trocadeelementos(vetor, 10);
	printf("\nelementos do vetor trocado: ");
	exibir(vetor, 10);
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
	
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}

void trocadeelementos(int vetor[], int tamanho){
	int i, j, res;
	
	for(i=0,j=1;i<tamanho;i+=2,j+=2){
		res=vetor[i];
		vetor[i]=vetor[j];
		vetor[j]=res;
		
	}
}
