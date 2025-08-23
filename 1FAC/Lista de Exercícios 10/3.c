/*Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.*/
#include<stdio.h>
void aleatorizador (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);
int verificar(int vetor[], int tamanho);

int main (){
	int vetorA[5]={2,5,6,9,14}, vetorB[5], res;
	
	aleatorizador(vetorB, 5, 20);
	
	printf("vetor A: ");
	exibir(vetorA, 5);
	printf("\nvetor B: ");
	exibir(vetorB, 5);
	
	printf("\no vetor A %s ", (verificar(vetorA, 5)==1) ? "nao e crescente.":"e crescente.");
	printf("\no vetor B %s ", (verificar(vetorB, 5)==1) ? "nao e crescente.":"e crescente.");
	
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
		printf("%d ",vetor[i]);
	}
}

int verificar(int vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho-1;i++){
		if(vetor[i]>vetor[i+1]){
			return 1;
		}
	}
	return 0;
}
