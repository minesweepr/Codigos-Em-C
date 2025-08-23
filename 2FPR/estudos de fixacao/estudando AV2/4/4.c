/*
Questão 01 [2,5 pontos]:
Dado um arquivo texto, contendo números inteiros, 
um por linha, criar um arquivo novo.txt apenas com 
os elementos do original que, na ordem que foram lidos, 
fazem com que o novo arquivo esteja ordenado crescentemente. 
Todos os demais valores que "atrapalharam" essa ordenação serão 
armazenados em no arquivo descartados.txt.*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int checar (char nomeOriginal[], char nomeNovo[], char nomeDescartado[]);

int main (){
	printf("o arquivo %sfoi lido com sucesso.", checar("original_exerc4.txt", "novo_exerc4.txt", "descartado_exerc4.txt")>=0?"":"nao ");
	
	return 0;
}

int checar (char nomeOriginal[], char nomeNovo[], char nomeDescartado[]){
	FILE *original, *novo, *descartado;
	int numOG, anterior=INT_MIN;
	original=fopen(nomeOriginal, "r");
	if(!original){
		return -1;
	}
	
	novo=fopen(nomeNovo, "w");
	descartado=fopen(nomeDescartado, "w");
	while(fscanf(original, "%d", &numOG)!=EOF){
		if(anterior>numOG){
			fprintf(descartado, "%d\n", numOG);

		} else {
			fprintf(novo, "%d\n", numOG);
			anterior=numOG;
		}
	}
	
	fclose(original);
	fclose(descartado);
	fclose(novo);
	return 1;
}

/*3 4 8 >1< 9 >7< >6< 10 11 12*/
