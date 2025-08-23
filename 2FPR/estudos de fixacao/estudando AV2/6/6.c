/*
Quest�o 04 [2,5 pontos]:
Fazer uma fun��o que, dado um arquivo texto com n�meros inteiros, um por linha, remova deste os valores da linha L1 � linha L2.
Observa��es:
1. Se a primeira linha for inv�lida, nada ser�
realizado e o valor 0 retornado pela fun��o. O mesmo ocorrer� se a segunda linha for inferior � primeira;
Se a linha L2 ultrapassar o final do arquivo, ser�o removidos todos os elementos da linha L1 ao final do arquivo;
3. Sempre que a opera��o for realizada, o valor 1 dever� ser retornado.*/
#include<stdio.h>
#include<stdlib.h>

int remocao (char nomearq[], int l1, int l2);

int main (){
	int l1, l2;
	
	printf("digite um intervalo de linhas: ");
	scanf("%d %d", &l1, &l2);
	
	int resp=remocao("numeros.txt",l1,l2);
	
	if(resp>0){
		printf("\nremocao realizada com sucesso");
	} else if (resp<0) {
		printf("\nerro ao encontrar o arquivo.");
	} else {
		printf("\ndados invalidos.");
	}
	
	return 0;
}

int remocao (char nomearq[], int l1, int l2){
	FILE *arq=fopen(nomearq, "r"), *temp;
	int num, linha=1;
	
	if(l1<0 || l1>l2){
		return 0;
	}
	
	if(!arq){
		return -1;
	}
	
	temp=fopen("temp.txt", "w");
	while(fscanf(arq, "%d", &num)!=EOF){
		if(linha<l1 || linha>l2){
			fprintf(temp, "%d\n", num);
		}
		linha++;
	}
	
	fclose(arq);
	fclose(temp);
	remove(nomearq);
	rename("temp.txt", nomearq);
	fclose(arq);
	return 1;
}
