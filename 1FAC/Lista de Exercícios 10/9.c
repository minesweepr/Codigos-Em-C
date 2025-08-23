/*QUESTÃO 09:
Implementar a função de inserção de
determinado elemento em um vetor ordenado
crescentemente (dica: utilizar a função do item
08 para auxiliar).*/
#include<stdio.h>
void exibir (int vetor[], int tamanho);
void substituir (int vetor[], int tamanho, int n);

int main (){
	int vetor[7]={1, 2, 4, 8, 11, 20}, n;
	
	exibir(vetor, 6);
	
	printf("\n\ninsira um numero: ");
	scanf("%d",&n);
	
	substituir(vetor, 7, n);
	exibir(vetor, 7);
	return 0;
}

void exibir (int vetor[], int tamanho){
	int i;
	printf("V = ");
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}

void substituir (int vetor[], int tamanho, int n){
	int i, j;
	for(i=0;i<tamanho-1;i++){
		if(n<vetor[i]){
			for(j=tamanho-1;j>i;j--) { 
				vetor[j]=vetor[j-1];
			}
			vetor[i]=n;
			break; 	
		}
	}
}



 
