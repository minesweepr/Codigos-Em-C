/*QUESTÃO 07:
Desenvolver uma função que remova
determinado elemento (todas as suas
ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas.*/
#include<stdio.h>
#include<stdlib.h>
#define QUANT 5
void aleatorizador (float vetor [], int tamanho, int limite);
void exibir (float vetor[], int tamanho);
int deletar (float vetor[], int tamanho, float n, int *j);

int main (){
	float vetor[QUANT], n;
	int j=0;
	aleatorizador(vetor, QUANT, 10.5);
	exibir(vetor, QUANT);
	
	printf("\nescolha um numero da sequencia: ");
	scanf("%f", &n);
	
	
	printf("\nseu numero foi removido %d vezes.\nsequencia atualizada: ", deletar(vetor, QUANT, n, &j));

	exibir(vetor, j);
	return 0;
}

void aleatorizador (float vetor [], int tamanho, int limite){
	int i;
	srand(time(NULL));
	for(i=0;i<tamanho;i++){
		vetor[i]=((float)rand() / RAND_MAX) * limite; //eu nao entendo pq q esses numeros nao sao lidos :(((((
	}
}

void exibir (float vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("%.1f ", vetor[i]);
	}
}

int deletar (float vetor[], int tamanho, float n, int *j){
	int i, removido=0;
	for(i=0;i<tamanho;i++){
		if((vetor[i]==n)){
			removido++;
		}
		else{
			vetor[*j]=vetor[i];
			(*j)++;
		}
	}
	return removido;
}
