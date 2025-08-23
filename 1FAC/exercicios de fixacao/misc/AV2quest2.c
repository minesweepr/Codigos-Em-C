#include<stdio.h>
/*Considere a existência de dois conjuntos numéricos A e B contendo n1 e n2 elementos, respectivamente. 
Pede-se o desenvolvimento de uma função que determine se um dos conjuntos está contido no outro, 
retornando os seguintes códigos:
- 1, se A estiver contido em B;
- 2, se B estiver contido em A; 
- 0, caso contrário.*/
void exibir (int vetor[], int tamanho);
int contido (int vetA[], int tamA, int vetB[], int tamB);

int main (){
	int A[5]={1,2,3,4,5}, B[3]={1,2,4}, resp;
	printf("vetor A = ");
	exibir(A, 5);
	printf("\nvetor B = ");
	exibir(B, 3);
	
	resp=contido(A, 5, B, 3);
	if(resp==1){
		printf("\n\nA esta contido em B.");
	}
	else if(resp==2){
		printf("\n\nB esta contido em A.");
	}
	else{
		printf("\n\nnenhum esta contido.");
	}
	
	return 0;
}

int contido (int vetA[], int tamA, int vetB[], int tamB){
	int i, j, tamMenor, tamMaior, existe=0, *vetMenor, *vetMaior;
	if(tamA<tamB){
		tamMenor=tamA;
		vetMenor=vetA; //ponteiro do vetor original
		tamMaior=tamB;
		vetMaior=vetB;
	}
	else{
		tamMenor=tamB;
		vetMenor=vetB;
		tamMaior=tamA;
		vetMaior=vetA;
	}
	
	for(i=0;i<tamMenor;i++){
		for(j=0;j<tamMaior;j++){
			if(vetMenor[i]==vetMaior[j]){
				existe++;
				break;
			}
		}
	}
	if(existe==tamMenor && tamMaior==tamB){
		return 1;
	}
	else if(existe==tamMenor && tamMaior==tamA){
		return 2;
	}
	else{
		return 0;
	}

}

void exibir (int vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}
