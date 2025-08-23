/*Quest�o 05:
Fa�a uma fun��o que, dado um arquivo A
contendo n�meros reais, um por linha, crie um
novo arquivo B contendo os mesmos
elementos de A, por�m ordenados
decrescentemente e sem repeti��o.*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int decrescente (char nomearqa[], char nomearqb[]);

int main (){
	printf("o arquivo %sfoi encontrado e ordenado", decrescente("A.txt", "B.txt")==1? "": "no ");
	
	return 0;
}

int decrescente (char nomearqa[], char nomearqb[]){
	FILE *arqa, *arqb;
	int num, parar, menor, anterior=INT_MIN;
	
	arqa=fopen(nomearqa, "r");
	arqb=fopen(nomearqb, "w");
	
	if(!arqa || !arqb){
		fclose(arqa); fclose(arqb);
		return -1;
	}

	do{
		rewind(arqa);
		menor=INT_MAX;
		parar=1;
		
		while(fscanf(arqa, "%d", &num)!=EOF){
			if(num<menor && num>anterior){
				menor=num;
				parar=0;
			}
		}
		
		if(!parar){
			fprintf(arqb, "%d\n", menor);
			anterior=menor;
		}
	}while(!parar);
	
	fclose(arqa); fclose(arqb);
	return 1;
}


