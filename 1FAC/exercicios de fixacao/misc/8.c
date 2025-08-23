/*QUESTÃO 08:
Dados um vetor de reais (cujos elementos
estão ordenados crescentemente) e um
número x, retornar a posição da primeira
ocorrência de x (caso encontre-se no vetor) ou
a posição na qual deveria estar (caso contrário).*/
#include<stdio.h>
void exibir (int vetor[], int tamanho);
int ocorrencia (int vetor[], int tamanho, int n, int *cont);

int main (){
	int vetor[5]={2,4,5,7,9}, n, cont;
	
	exibir(vetor, 5);
	printf("\ninsira um numero: ");
	scanf("%d",&n);
	
	if(ocorrencia(vetor, 5, n, &cont)==1){
		printf("o numero %d foi encontrado e esta na posicao %d", n, cont);
	}
	else{ 
	printf("o numero %d nao foi escontrado e estaria entre as posicoes %d e %d", n, cont-1, cont);
	} 
	//printf("o numero %d %s %d", n, (ocorrencia(vetor, 5, n, &cont)==1) ? "foi encontrado e esta na posicao" : "nao foi escontrado e estaria entre as posicoes %d e", cont, cont-1, cont);
	
	return 0;
}

int ocorrencia (int vetor[], int tamanho, int n, int *cont){
	int i;
	(*cont)=0;
	for(i=0;i<tamanho;i++){
		if(vetor[i]==n){
			return 1;
		}
		if(vetor[i]>n){
			break;
		}
		(*cont)++;
	}
	return 0;
}

void exibir (int vetor[], int tamanho){
	int i;
	printf("vetor = ");
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}
