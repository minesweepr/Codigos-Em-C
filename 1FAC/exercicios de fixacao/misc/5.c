/*QUESTÃO 05:
Elaborar uma função que, dado um conjunto de
300 valores inteiros, distribua-os em 2 vetores
conforme forem pares ou ímpares.*/
#include<stdio.h>
#define QUANT 300
void aleatorizador (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);
void parouimpar (int vetor[], int tamanho, int vetIMPAR[], int vetPAR[], int *pares, int *impares);

int main (){
	int vetor[QUANT], vetPAR[QUANT], vetIMPAR[QUANT], pares, impares;
	printf("vetor completo: ");
	aleatorizador(vetor, QUANT, 20);
	exibir(vetor, QUANT);
	
	parouimpar(vetor, QUANT, vetIMPAR, vetPAR, &pares, &impares);
	printf("\n\nvetor impar: ");
	exibir(vetIMPAR, impares); 
	printf("\nvetor par: ");
	exibir(vetPAR, pares);
	
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

void parouimpar (int vetor[], int tamanho, int vetIMPAR[], int vetPAR[], int *pares, int *impares){
	int i;
	*pares=0;
	*impares=0;
	for(i=0;i<tamanho;i++){
		if(vetor[i]%2==0){
			(*pares)++;
			vetPAR[(*pares)-1]=vetor[i];
		}
		else{
			(*impares)++;
			vetIMPAR[(*impares)-1]=vetor[i];
		}
	}
}



