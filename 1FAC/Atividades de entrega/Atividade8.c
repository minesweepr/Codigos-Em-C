/*Considere que um vetor de inteiros armazene o número 0 em algumas de suas posições objetivando “separar
subconjuntos de valores”, como no exemplo a seguir:

5 7 3 0 5 9 0 1 0 3  4  8
0 1 2 3 4 5 6 7 8 9 10 11

Desenvolver uma função que, dados um vetor como definido anteriormente e um número inteiro n, retorne um
vetor contendo o n-ésimo subconjunto do vetor.
Notas:
1. Caso exista o n-ésimo subconjunto, a função retornará, além do subconjunto, o valor 1; caso contrário,
retornará 0.
2. Apresentar a main chamando a função implementada.*/
#include<stdio.h>
void exibir (int vetor[], int tamanho);
int subconjunto (int sub[], int *subSize, int vetor[], int tamanho, int n);

int main (){
	int vetor[]={5, 7, 3, 0, 5, 9, 0, 1, 0, 3, 4, 8}, n, sub[12], subSize;
	printf("V = ");
	exibir(vetor, 12);
	printf("\ninsira um numero: ");
	scanf("%d",&n);
	
	if(subconjunto(sub, &subSize, vetor, 12, n)==1){
		printf("\nrespectivo subconjunto: ");
		exibir(sub, subSize);
	}
	else{
		printf("\nsubconjunto invalido.");
	}
	
	return 0;
}
void exibir (int vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}

int subconjunto (int sub[], int *subSize, int vetor[], int tamanho, int n){
	int i, j, zero=0, inicio=-1, fim=tamanho;
	if(n<1 || n>4){
		return 0; 
	}

	for(i=0;i<tamanho;i++){
		if(vetor[i]==0){
			zero++;
			if(zero==n){
				fim=i;
				break;
			}
    	}
    	if(zero==n-1 && inicio==-1){
		    inicio=i+1; 
		}
	    
		if(n==1){
			inicio=0; 
			/*
			eu nao sei o quao valida e a solucao q eu achei, esse if(n==1) parece meio porco.
			eu coloquei pq, de certa forma, ta certo. mas eu queria saber se tem algum jeito
			melhor de arrumar isso. eu sei que o "inicio=i+1" e o que quebra o subconjunto 1,
			mas eu nao sei como arrumar alem dessa forma.
			*/
		}
    }
        
        
    for(i=inicio,j=0;i<fim;i++,j++){
		sub[j]=vetor[i];
	}
    *subSize=j;
	
	return 1;
}

