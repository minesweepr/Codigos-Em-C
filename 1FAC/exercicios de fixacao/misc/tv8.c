/*Considere que um vetor de inteiros armazene o n�mero 0 em algumas de suas posi��es objetivando �separar
subconjuntos de valores�, como no exemplo a seguir:

5 7 3 0 5 9 0 1 0 3 4 8
0 1 2 3 4 5 6 7 8 9 10 11

Desenvolver uma fun��o que, dados um vetor como definido anteriormente e um n�mero inteiro n, retorne um
vetor contendo o n-�simo subconjunto do vetor.
Notas:
1. Caso exista o n-�simo subconjunto, a fun��o retornar�, al�m do subconjunto, o valor 1; caso contr�rio,
retornar� 0.
2. Apresentar a main chamando a fun��o implementada.*/
#include<stdio.h>
void exibir (int vetor[], int tamanho);

int main (){
	int vetor[12]=[5, 7, 3, 0, 5, 9, 0, 1, 0, 3, 4, 8], sub;
	exibir(vetor, 12);
	
	printf("digite o subconjunto desejado: ");
	scanf("%d",&sub);
	
	printf("\nsubconjunto %d = ", sub);
	
	return 0;
}

int subconjuntos (int vetor[], int tamanho, int sub){
	int i;
	
	
	return 0; //nao encontrado
}

void exibir (int vetor[], int tamanho){
	int i;
	printf("vetor = ");
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}
