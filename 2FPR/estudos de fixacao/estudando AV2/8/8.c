/*
Questão 06 [2,0 pontos]:
Fazer uma função que, dado um arquivo texto contendo 
números inteiros, um por linha, ordene-o crescentemente.
Nota: caso haja necessidade da utilização de estruturas 
auxiliares, estas só podem ser arquivos. Não serão aceitas 
soluções que utilizem, por exemplo, vetores.*/
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
