/*
Quest�o 06 [2,0 pontos]:
Fazer uma fun��o que, dado um arquivo texto contendo 
n�meros inteiros, um por linha, ordene-o crescentemente.
Nota: caso haja necessidade da utiliza��o de estruturas 
auxiliares, estas s� podem ser arquivos. N�o ser�o aceitas 
solu��es que utilizem, por exemplo, vetores.*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int ordenado(char nomeA[], char nomeO[]);

int main (){
	printf("o arquivo %sfoi encontrado e ordenado", ordenado("a.txt", "ordenado.txt")<0?"nao ":"");
	return 0;
}

int ordenado(char nomeA[], char nomeO[]){
	FILE *a, *ord;
	int num, parar, menor, anterior=INT_MIN;
	a=fopen(nomeA, "r");
	ord=fopen(nomeO, "w");
	if(!a || !ord){
		fclose(a); fclose(ord);
		return -1;
	}
	
	do{
		rewind(a);
		parar=1;
		menor=INT_MAX;
		
		while(fscanf(a, "%d", &num)!=EOF){
			if(num<menor && num>anterior){
				menor=num;
				parar=0;
			}
		}
		
		if(!parar){
			fprintf(ord, "%d\n", menor);
			anterior=menor;
		}
	}while(!parar);
	
	fclose(a); fclose(ord);
	return 0;
}
