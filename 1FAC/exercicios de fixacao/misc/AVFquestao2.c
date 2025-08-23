#include<stdio.h>
void aleatorizador (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);
int checar (int vetor[], int tamanho);

int main (){
	int vetor[3];
	aleatorizador(vetor, 3, 5);
	exibir(vetor, 3);
	
	printf("\n\no vetor %s", (checar(vetor, 3)==1) ? "e um palindromo" : "nao e um palindromo");
	
	return 0;
}

int checar (int vetor[], int tamanho){
	int i, j;
	for(i=0, j=tamanho-1; i<tamanho; i++, j--){
		if(vetor[i]!=vetor[j]){
			return 0;
		}
	}
	return 1;
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
	printf("vetor = ");
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}
