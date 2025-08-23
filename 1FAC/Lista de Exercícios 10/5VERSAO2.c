#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 300

// Protótipos das funções
void preencherAleatorio(int vetor[], int tamanho, int limite);
void separarParesImpares(int vetor[], int tamanho, int pares[], int *numPares, int impares[], int *numImpares);
void exibirVetor(const char *descricao, int vetor[], int tamanho);

int main() {
    int vetor[TAMANHO], pares[TAMANHO], impares[TAMANHO];
    int numPares = 0, numImpares = 0;

    // Preencher o vetor com valores aleatórios
    preencherAleatorio(vetor, TAMANHO, 100); // Números aleatórios até 99

    // Separar os números em pares e ímpares
    separarParesImpares(vetor, TAMANHO, pares, &numPares, impares, &numImpares);

    // Exibir os vetores
    exibirVetor("Conjunto original", vetor, TAMANHO);
    exibirVetor("Números pares", pares, numPares);
    exibirVetor("Números ímpares", impares, numImpares);

    return 0;
}

// Função para preencher o vetor com valores aleatórios
void preencherAleatorio(int vetor[], int tamanho, int limite) {
	int i;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    for (i = 0; i < tamanho; i++) {
        vetor[i] = rand() % limite;
    }
}

// Função para separar os números em pares e ímpares
void separarParesImpares(int vetor[], int tamanho, int pares[], int *numPares, int impares[], int *numImpares) {
	int i;
    for ( i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            pares[*numPares] = vetor[i];
            (*numPares)++;
        } else {
            impares[*numImpares] = vetor[i];
            (*numImpares)++;
        }
    }
}

// Função para exibir um vetor com uma descrição
void exibirVetor(const char *descricao, int vetor[], int tamanho) {
	int i;
    printf("%s:\n", descricao);
    for ( i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
}
