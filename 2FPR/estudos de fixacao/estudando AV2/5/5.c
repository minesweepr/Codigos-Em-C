/*
Quest�o 02 [2,5 pontos]:
Implementar uma fun��o que, dado um arquivo texto contendo n�meros inteiros, 
um por linha, e dois valores inteiros A e B, crie outros tr�s arquivos, como 
descritos a seguir:
 > O primeiro deles conter� todos os valores do arquivo original inferiores a A;
 > O segundo ser� formado pelos valores do arquivo original pertencentes ao 
 intervalo de A a B;
 > O �ltimo arquivo, por sua vez, conter� os elementos maiores do que B.

Notas:
- Todos os tr�s novos arquivos n�o poder�o conter elementos repetidos;
- Por ser uma quest�o que avalia o conceito sobre Arquivos, n�o ser�o 
analisadas solu��es que transfiram os elementos do arquivo para outras 
estruturas de dados como, por exemplo, vetores.*/

#include<stdio.h>
#include<stdlib.h>

int numeros (char nomeOriginal[], int numA, int numB);
int existe (char nome[], int num);

int main (){
	int A, B;
	
	printf("insira dois valores: ");
	scanf("%d %d", &A, &B);
	
	printf("o arquivo original %sfoi encontrado.", numeros("original.txt", A, B)>0? "": "nao ");
	
	return 0;
}

int numeros (char nomeOriginal[], int numA, int numB){
	FILE *original, *temporario, *A, *AB, *B;
	int numOriginal;
	
	original=fopen(nomeOriginal, "r");
	if(!original){
		return -1;
	}
	
	while(fscanf(original, "%d", &numOriginal)!=EOF){
		if(!existe("temp.txt", numOriginal)){
			temporario=fopen("temp.txt", "a");
			fprintf(temporario, "%d\n", numOriginal);
			fclose(temporario);
		}
	}
	
	fclose(original);
	
	A=fopen("A.txt", "w");
	AB=fopen("AB.txt", "w");
	B=fopen("B.txt", "w");
	temporario=fopen("temp.txt", "r");
	while(fscanf(temporario, "%d", &numOriginal)!=EOF){
		if(numOriginal<numA){
			fprintf(A, "%d\n", numOriginal);
		} else if(numOriginal<=numB){
			fprintf(AB, "%d\n", numOriginal);
		} else {
			fprintf(B, "%d\n", numOriginal);
		}
	}
	
	fclose(temporario);
	remove("temp.txt");
	fclose(A);
	fclose(AB);
	fclose(B);
	return 1;
}

int existe (char nome[], int num){
	FILE *temp=fopen(nome, "r");
	int auxiliar;

	while(fscanf(temp, "%d", &auxiliar)!=EOF){
		if(auxiliar==num){
			return 1;
		}
	}
	fclose(temp);
	return 0;
}
