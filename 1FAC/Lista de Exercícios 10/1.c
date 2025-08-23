/*Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.*/
#include <stdio.h>
void aleatorizador(int vetorA[], int tamanho, int limite);
void exibir(int vetorA[], int tamanho);
int contador(int vetorA[], int tamanho, int n);

int main (){
	int n, res, vetorA[50];
	
	aleatorizador(vetorA, 50, 10);
	exibir(vetorA, 50);
	
	printf("\n\ninsira um numero: ");
	scanf("%d",&n);
	
	printf("o numero %d foi encontrado %d vezes!", n, res=contador(vetorA, 50, n));
	return 0;
}

void aleatorizador(int vetorA[], int tamanho, int limite){
	int i;
	srand (time(NULL));
	
	for(i=0;i<50;i++){
		vetorA[i]=rand()%limite;
	}
}

void exibir(int vetorA[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("%d ", vetorA[i]);
	}
}

int contador(int vetorA[], int tamanho, int n){
	int i, cont=0;
	for(i=0;i<tamanho;i++){
		if(vetorA[i]==n){
			cont++;
		}
	}
	return cont;
}

