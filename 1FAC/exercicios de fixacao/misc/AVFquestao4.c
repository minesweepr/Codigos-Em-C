#include<stdio.h>
#define quant 5
void aleatorizador (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);
void trocavetores (int vA[], int vB[], int tamanho);

int main (){
	int vetorA[quant], vetorB[quant];
	srand(time(NULL));
	printf("vetor A = ");
	aleatorizador(vetorA, quant, 20);
	exibir(vetorA, quant);
	
	printf("\nvetor B = ");
	aleatorizador(vetorB, quant, 20);
	exibir(vetorB, quant);
	
	trocavetores (vetorA, vetorB, quant);
	printf("\n\nvetor A trocado = ");
	exibir(vetorA, quant);
	printf("\nvetor B trocado = ");
	exibir(vetorB, quant);
	
	return 0;
}

void trocavetores (int vA[], int vB[], int tamanho){
	int i, temp;
	for(i=0;i<tamanho;i++){
		if(vA[i]>vB[i]){
			temp=vA[i];
			vA[i]=vB[i];
			vB[i]=temp;
		}
	}
}

void aleatorizador (int vetor[], int tamanho, int limite){
	int i;
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
