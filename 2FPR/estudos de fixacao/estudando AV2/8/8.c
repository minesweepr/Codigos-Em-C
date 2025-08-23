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

int ordenar (char nomearq[]);

int main (){
	printf("a troca %sfoi realizada com sucesso", ordenar("arq.txt")==1?"":"nao ");
	
	return 0;
}

int ordenar (char nomearq[]){
	FILE *arq=fopen(nomearq, "r"), *temp=fopen("temp.txt", "w");
	int num, encontrou, menor, anterior=INT_MIN;
	
	if(!arq||!temp){
		fclose(arq);
		fclose(temp);
		return -1;
	}
	
	do{
		rewind(arq);
		encontrou=0;
		menor=INT_MAX;
		while(fscanf(arq, "%d", &num)!=EOF){
			if(num!=anterior){
				if(num>anterior && num<menor){
					menor=num;
				    encontrou=1;
				}
			}
		}
		
		if(encontrou){
			fprintf(temp, "%d\n", menor);
			anterior=menor;
		}
	}while(encontrou);
	
	fclose(arq);
	fclose(temp);
	//remove(nomearq);
	//rename("temp.txt", nomearq);
	return 1;
}
