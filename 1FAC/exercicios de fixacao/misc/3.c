/*QUESTÃO 03:
Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.*/
#include<stdio.h>
void aleatorizador (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);
int checar (int vetor[], int tamanho);

int main (){
	int vetorA[5]={2,4,5,7,8}, vetorB[5];
	
	printf("vetor A: ");
	exibir(vetorA, 5);
	printf("\no vetor A %s", (checar(vetorA, 5)==1) ? " e crescente.":" nao e crescente.");
	
	printf("\n\nvetor B: ");
	aleatorizador(vetorB, 5, 9);
	exibir(vetorB, 5);
    printf("\no vetor B %s", (checar(vetorB, 5)==1) ? " e crescente.":" nao e crescente");
	
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

int checar (int vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho-1;i++){
		if(vetor[i]>vetor[i+1]){
			return 0;
		}
	}
	return 1;
}
