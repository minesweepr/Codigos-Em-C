/*QUESTÃO 10:
Fazer uma função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na união dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B.*/
#include<stdio.h>
void exibir (int vetor[], int tamanho);
int uniao (int vetorA[], int vetorB[], int tamanhoAB, int vetorC[], int *tamanhoC);

int main (){
	int vetorA[5]={1, 2, 4, 8, 11}, vetorB[5]={2, 4, 5, 7, 8}, vetorC[12], tamanhoC;
	printf("vetor A = ");
	exibir(vetorA, 5);
	
	printf("\nvetor B = ");
	exibir(vetorB, 5);
	
	printf("\n\nuniao dos vetores = ");
	uniao (vetorA, vetorB, 5, vetorC, &tamanhoC);
	exibir(vetorC, tamanhoC);
	
	return 0;
}

int uniao (int vetorA[], int vetorB[], int tamanhoAB, int vetorC[], int *tamanhoC){
	int i, j, existe;
	*tamanhoC=tamanhoAB;
	for(i=0;i<tamanhoAB;i++){
		vetorC[i]=vetorA[i];
		for(j=0;j<tamanhoAB;j++){
			existe=0;
			if(vetorB[i]==vetorA[j]){
				existe++;
				break;
			}
		}
		if(existe==0){
			vetorC[*tamanhoC]=vetorB[i];
			(*tamanhoC)++;
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
