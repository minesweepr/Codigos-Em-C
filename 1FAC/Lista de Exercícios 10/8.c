/*QUESTÃO 08:
Dados um vetor de reais (cujos elementos
estão ordenados crescentemente) e um
número x, retornar a posição da primeira
ocorrência de x (caso encontre-se no vetor) ou
a posição na qual deveria estar (caso contrário).*/
#include<stdio.h>
void exibir (int vetor[], int tamanho);
int procurar (int vetor[], int tamanho, int n, int *j);

int main (){
	int vetor[6]={1, 2, 4, 8, 11, 20}, n, j=1;
	
	exibir(vetor, 6);
	
	printf("\n\ninsira um numero: ");
	scanf("%d",&n);
	
	if(procurar(vetor, 6, n, &j)==0){
		printf("o numero %d foi encontrado e esta na posicao %d", n, j);
	}
	else{ 
	printf("o numero %d nao foi escontrado e estaria entre as posicoes %d e %d", n, j-1, j);
	}
	//printf("\no numero %d %s", n, (procurar(vetor, 6, n, &j)==0) ? "foi encontrado e esta na posicao %d", j : "nao foi escontrado e estaria entre %d e %d", j-1, j);
	return 0;
}

void exibir (int vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}

int procurar (int vetor[], int tamanho, int n, int *j){
	int i;
	for(i=0;i<tamanho;i++){
		if(vetor[i]==n){
			return 0;
		}
		if(n<vetor[i]){
			break;
		}
		(*j)++;
	}
	return 1;
}
