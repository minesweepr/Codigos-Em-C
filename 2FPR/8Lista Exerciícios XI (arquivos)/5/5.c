/*Questão 05:
Faça uma função que, dado um arquivo A
contendo números reais, um por linha, crie um
novo arquivo B contendo os mesmos
elementos de A, porém ordenados
decrescentemente e sem repetição.*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void printar (char nomearq[]);
int repeticao(FILE *arq1, int atual, int colocacao);
int decrescente (char nomearq1[], char nomearq2[]);

int main (){
	int res=decrescente("A.txt", "B.txt");
	if(res<0){
		printf("erro ao ler o arquivo.");
	} else{
		printf("os numeros do arquivo A.txt foram ordenados no arquivo B.txt.");
		printar("A.txt");
		printar("B.txt");
	}
	return 0;
}

void printar (char nomearq[]){
	FILE *arq;
	int num;
	printf("\n\n\narquivo %s:\n", nomearq);
	arq=fopen(nomearq, "r");
	while(fscanf(arq, "%d", &num)!=EOF){
		printf("%d\n", num);
	}
	fclose(arq);
}

int repeticao(FILE *arq1, int atual, int colocacao){//checar se funciona
    int i, num;
    rewind(arq1);
    for(i=0;i<colocacao;i++){
    	if(fscanf(arq1, "%d", &num)==atual){
    		return 1;
		}
	}
	return 0;
}

int decrescente (char nomearq1[], char nomearq2[]){
	FILE *arq1, *arq2, *temp;
	int num, colocacao=0, maior, anterior=INT_MAX, fim;
	
	arq1=fopen(nomearq1, "r");
	arq2=fopen(nomearq2, "w");
	temp=fopen("temp.txt", "w");
	if(!arq1 || !arq2 || !temp){
		fclose(arq1);
		fclose(arq2);
		return -1;
	}
	/*A.txt tem esses numeros: 3 2 1 3 5 9
	3 2 1 5 9
	*/
	
	while(fscanf(arq1, "%d", &num)!=EOF){
		if(!repeticao(arq1, num, colocacao)){
		     fprintf(temp, "%d\n", num);	
		}	
		colocacao++;	
	}
	
	fclose(arq1);
	
	/*3 2 1 5 9
	maior=3...3..3...5...9
	9
	anterior=9
	maior=minimo
	
	*/
	do{
		maior=INT_MIN;
		rewind(temp);
		fim=1;
		while(fscanf(temp, "%d", &num)!=EOF){
			if(num<anterior && num>maior){
				maior=num;
				fim=0;
			}
		}
		if(!fim){
			fprintf(arq2, "%d\n", maior);
			anterior=maior;
		}
	}while(!fim);
	
	fclose(temp);
	//remove("temp.txt"); estou mantendo temp.txt para saber oq esta e n esta funcionando, mas meu objetivo é apagar

	fclose(arq2);
	return 1;
}
