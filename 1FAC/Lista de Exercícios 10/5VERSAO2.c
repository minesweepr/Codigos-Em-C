#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 300

// Prot�tipos das fun��es
void preencherAleatorio(int vetor[], int tamanho, int limite);
void separarParesImpares(int vetor[], int tamanho, int pares[], int *numPares, int impares[], int *numImpares);
void exibirVetor(const char *descricao, int vetor[], int tamanho);

int main() {
    int vetor[TAMANHO], pares[TAMANHO], impares[TAMANHO];
    int numPares = 0, numImpares = 0;

    // Preencher o vetor com valores aleat�rios
    preencherAleatorio(vetor, TAMANHO, 100); // N�meros aleat�rios at� 99

    // Separar os n�meros em pares e �mpares
    separarParesImpares(vetor, TAMANHO, pares, &numPares, impares, &numImpares);

    // Exibir os vetores
    exibirVetor("Conjunto original", vetor, TAMANHO);
    exibirVetor("N�meros pares", pares, numPares);
    exibirVetor("N�meros �mpares", impares, numImpares);

    return 0;
}

// Fun��o para preencher o vetor com valores aleat�rios
void preencherAleatorio(int vetor[], int tamanho, int limite) {
	int i;
    srand(time(NULL)); // Inicializa o gerador de n�meros aleat�rios
    for (i = 0; i < tamanho; i++) {
        vetor[i] = rand() % limite;
    }
}

// Fun��o para separar os n�meros em pares e �mpares
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

// Fun��o para exibir um vetor com uma descri��o
void exibirVetor(const char *descricao, int vetor[], int tamanho) {
	int i;
    printf("%s:\n", descricao);
    for ( i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
}
