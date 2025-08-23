/*QUESTÃO 11:
Fazer uma função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na intersecção dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B.*/
#include<stdio.h>
void exibir (int vetor[], int tamanho);
int inter (int vetorA[], int vetorB[], int tamanhoAB, int vetorC[], int *tamanhoC);

int main (){
	int vetorA[5]={1, 2, 4, 8, 11}, vetorB[5]={2, 4, 5, 7, 8}, vetorC[10], tamanhoC;
	printf("vetor A = ");
	exibir(vetorA, 5);
	
	printf("\nvetor B = ");
	exibir(vetorB, 5);
	
	printf("\n\ninterseccao dos vetores = ");
	inter(vetorA, vetorB, 5, vetorC, &tamanhoC);
	exibir(vetorC, tamanhoC);
	
	return 0;
}

int inter (int vetorA[], int vetorB[], int tamanhoAB, int vetorC[], int *tamanhoC){
	int i, j, existe;
	*tamanhoC=0;
	for(i=0;i<tamanhoAB;i++){
		for(j=0;j<tamanhoAB;j++){
			if(vetorA[i]==vetorB[j]){
				vetorC[*tamanhoC]=vetorA[i];
				(*tamanhoC)++;
				break;
			}
		}
	}
	return *tamanhoC;
}

void exibir (int vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}
