/*Dado um vetor contendo números reais, desenvolver uma função que determine o maior valor do vetor inferior à
média de seus elementos, assim como o menor que seja superior a esta média.
Nota: apresentar a main chamando a função implementada.*/
#include<stdio.h>
#include<limits.h>
int checar (int vetor[], int tamanho, int *maiorinf, float *media);
void aleatorizador (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);


int main (){
	int vetor[5], maiorinf, menorinf;
	float media;
	
	aleatorizador(vetor, 5, 20);
	exibir(vetor, 5);
	
	menorinf=checar(vetor, 5, &maiorinf, &media);
	printf("\n\nRESULTADOS:\nmedia = %.1f\nmaior valor inferior a media = %d\nmenor valor superior a media = %d", media, maiorinf, menorinf);
	
	return 0;
}
int checar (int vetor[], int tamanho, int *maiorinf, float *media){
	int menor=INT_MAX, i, total=0;
	*maiorinf=INT_MIN;
	
	for(i=0;i<tamanho;i++){
		total+=vetor[i];
	}
	*media=(float)total/tamanho;
	
	for(i=0;i<tamanho;i++){
		/*if(vetor[i]>media){
			menor=(vetor[i]<menor)?vetor[i]:menor;
		}
		else{
			*maiorinf=(vetor[i]>*maiorinf)?vetor[i]:*maiorinf;
		}*/
		if(vetor[i]>*media && vetor[i]<menor){
			menor=vetor[i];
		}
		if(vetor[i]<*media && vetor[i]>*maiorinf){
			(*maiorinf)=vetor[i];
		}
	}
	return menor;
}

void aleatorizador (int vetor[], int tamanho, int limite){
	int i;
	srand(time(NULL));
	for(i=0;i<tamanho;i++){
		vetor[i]=rand()%limite;
	}
}

void exibir (int vetor[], int tamanho){
	int i;
	printf("vetor = ");
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}


