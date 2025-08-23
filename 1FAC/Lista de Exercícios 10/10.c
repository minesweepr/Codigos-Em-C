/*Fazer uma função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na união dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B.*/
#include<stdio.h>
#include<stdlib.h>
#define tamAB 5

void aleatorizador(int vetor[], int tamanho, int limite);
void exibir(int vetor[], int tamanho);
int tamanhovetor (int C[], int sizeC, int A[], int B[]);

int main (){
	int A[tamAB]={1,3,5,8,9}, B[tamAB]={4,5,8,10,2}, C[10], tamC;
	//srand(time(NULL)); //movi pros numeros serem diferentes
	
	printf("vetor A: ");
	/*aleatorizador(A, tamAB, 20);*/
	exibir(A, tamAB);
	
	printf("\nvetor B: ");
	/*aleatorizador(B, tamAB, 20);*/
	exibir(B, tamAB);
	
	tamC=tamanhovetor(C, tamC, A, B);
	
	printf("\n\nuniao dos vetores A e B: ");
	exibir(C, tamC);
	
	return 0;
}

/*void aleatorizador (int vetor [], int tamanho, int limite){
	int i;
	 
	for(i=0;i<tamanho;i++){
		vetor[i]=rand()%limite;
		
	}
}*/
void exibir (int vetor [], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}

int tamanhovetor (int C[], int tamC, int A[], int B[]){
	int i, j, existe, sizeC=0;
	for(i=0;i<tamAB;i++){
		C[sizeC++]=A[i];
	}
	
	for(i=0;i<tamAB;i++){
		existe=0;
		for(j=0;j<=tamAB;j++){
			if(A[j]==B[i]){
				existe=1;
			    break;
				}
			}
			if(existe!=1){
				C[sizeC++]=B[i];
				
			}
		}
	return sizeC;
	
}


