/*QUESTÃO 07:
Desenvolver uma função que remova
determinado elemento (todas as suas
ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas.*/
//na vdd nao precisa ser floar pq o professor ta pouco se fudendo
#include<stdio.h>
#define QUANT 5
void aleatorizador (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);
int sub (int vetor[], int tamanho, int n, int *cont);

int main (){
	int vetor[QUANT], n, cont, resp;
	
	aleatorizador(vetor, QUANT, 20);
	exibir(vetor, QUANT);
	printf("\ninsira o numero que deseja remover: ");
	scanf("%d",&n);
	
	printf("\no numero %d foi removido %d vezes.\n", n, sub (vetor, QUANT, n, &cont));
	
	exibir(vetor, cont);
	
	
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
	printf("vetor = ");
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}

int sub (int vetor[], int tamanho, int n, int *cont){
	int i, removido=0;
	(*cont)=0;
	for(i=0;i<tamanho;i++){
		if(vetor[i]==n){
			removido++;
		}
		else{
			vetor[*cont]=vetor[i];
			(*cont)++;
		}
	}
	return removido;
}
