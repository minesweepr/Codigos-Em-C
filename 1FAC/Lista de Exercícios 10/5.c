/*QUESTÃO 05:
Elaborar uma função que, dado um conjunto de
300 valores inteiros, distribua-os em 2 vetores
conforme forem pares ou ímpares.*/
#include<stdio.h>
#define QUANT 5 //mudar para 300
void aleatorizar (int vetor[], int tamanho, int limite);
void checar (int vetor[], int tamanho, int par[], int *contpar, int impar[], int *contimpar);
void exibir (int vetor[], int tamanho);

int main(){
	int vetor[QUANT], contpar=0, contimpar=0, impar[QUANT], par[QUANT];
	printf("conjunto total: ");
	aleatorizar(vetor, QUANT, 20);
	exibir(vetor, QUANT);
	
	checar (vetor, QUANT, par, &contpar, impar, &contimpar);
	printf("\n\nsubconjunto par: ");
	exibir(par, contpar);
	printf("\nsubconjunto impar: ");
	exibir(impar, contimpar);
	
	return 0;
}

void aleatorizar (int vetor[], int tamanho, int limite){
	int i;
	srand(time(NULL));
	for(i=0;i<tamanho;i++){
		vetor[i]=rand()%limite;
	}
}

void checar (int vetor[], int tamanho, int par[], int *contpar, int impar[], int *contimpar){
	int i;
	for(i=0;i<tamanho;i++){
	    if (vetor[i] % 2 == 0) {
            par[*contpar] = vetor[i];  
            (*contpar)++;             
        } else {
            impar[*contimpar] = vetor[i];  
            (*contimpar)++;               
        }
    }
}

void exibir (int vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}
