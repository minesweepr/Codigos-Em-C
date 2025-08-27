#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N 10

typedef struct data{
	int mes, ano;
}Data;

typedef struct carro{
	char placa[8], dono[40];
	Data dataFab;
	int multas;
}Carro;

void exibeCadastro (Carro *carro);
void exibeMaisMultados(Carro vcarro[], int n);
void exibeMaisAntigo(Carro vcarro[], int n);
char *geraAdvertenciaMultas(Carro *carro);
char *geraAdvertenciaData(Carro *carro);
void exibeAdvertencias(Carro vcarro[], int n);
Carro *separaZerados (Carro vcarro[], int n, int *nz);
void exibeZerados(Carro vcarro[], int n);

int main (){
		Carro vet_carros[N] = {{"NVY4822", "Ana Silva", {5, 2010}, 2},
							{"LAB5849", "Pedro Duarte", {9, 2004}, 8},
							{"HMF4821", "Joao Filho", {8, 2000}, 3},
							{"POD1842", "Maria Gomes", {2, 1994}, 5},
							{"VFJ3284", "Silvio Lins", {10, 1998}, 6},
							{"WED7452", "Marcia Morais", {1, 1991}, 2},
							{"HEL1475", "Bruno Rodrigues", {12, 2005}, 8},
							{"IKF3685", "Thais Silva", {3, 1990}, 4},
							{"WPF4528", "Ricardo Costa", {7, 2009}, 10},
							{"FNY1579", "Julia Neves", {4, 1997}, 7}};
							
	exibeMaisMultados(vet_carros, N);
	exibeMaisAntigo(vet_carros, N);
	exibeAdvertencias(vet_carros, N);
	
	int n_zerados=0;
	Carro *vet_zerados=separaZerados(vet_carros, N, &n_zerados);
	if(vet_zerados==NULL){
		printf("\n\nNAO HA CARROS ZERADOS.");
	}else{
		exibeZerados(vet_zerados, n_zerados);
		free(vet_zerados);
	}
	return 0;
}

void exibeCadastro (Carro *carro){
	printf("\n  > %s (%d/%d) - %s - %d multas", carro->placa, carro->dataFab.mes, carro->dataFab.ano, carro->dono, carro->multas);
}

void exibeMaisMultados(Carro vcarro[], int n){
	int i;
	printf("CARROS COM MAIS DE 5 MULTAS -- mais multados");
	for(i=0;i<n;i++){
		if(vcarro[i].multas>5){
			exibeCadastro(&vcarro[i]);
		}
	}
}

void exibeMaisAntigo(Carro vcarro[], int n){
	int i, antigo=0, anodif;
	printf("\n\nCARRO MAIS ANTIGO");
	for(i=1;i<n;i++){
		anodif=vcarro[i].dataFab.ano-vcarro[antigo].dataFab.ano;
		if(anodif<0 || (anodif==0 && vcarro[i].dataFab.mes<vcarro[antigo].dataFab.mes)){
			antigo=i;
		}
	}
	exibeCadastro(&vcarro[antigo]);
}

char *geraAdvertenciaMultas(Carro *carro){
	char msg[]=", seu veiculo possui muitas multas!";
	char *nome=(char*)malloc((strlen(carro->dono)+strlen(msg)+1)*sizeof(char));
	strcpy(nome, carro->dono);
	strcat(nome, msg);
	return nome;
}

char *geraAdvertenciaData(Carro *carro){
	char msg[]=", seu veiculo e muito antigo!";
	char *nome=(char*)malloc((strlen(carro->dono)+strlen(msg)+1)*sizeof(char));
	strcpy(nome, carro->dono);
	strcat(nome, msg);
	return nome;
}

void exibeAdvertencias(Carro vcarro[], int n){
	time_t now=time(NULL);
	struct tm *t=localtime(&now);
	int i, ano=t->tm_year+1900, mes=t->tm_mon+1, anodif;
	printf("\n\nCARROS QUE POSSUEM MAIS DE 5 MULTAS OU TEM MAIS DE 20.5 ANOS");
	for(i=0;i<n;i++){
		if(vcarro[i].multas>5){
			char *adv=geraAdvertenciaMultas(&vcarro[i]);
			printf("\n%s",adv);
			free(adv);
		}
		anodif=ano-vcarro[i].dataFab.ano;
		if(anodif>20 || (anodif==20 && (mes-vcarro[i].dataFab.mes)>0)){
			char *adv=geraAdvertenciaData(&vcarro[i]);
			printf("\n%s", adv);
			free(adv);
		}
	}
}

Carro *separaZerados (Carro vcarro[], int n, int *nz){
	int i, j=0;
	for(i=0;i<n;i++){
		if(vcarro[i].multas==0){
			(*nz)++;
		}
	}
	if(*nz==0){
		return NULL;
	} else{
		Carro *novo=(Carro*)malloc((*nz)*sizeof(Carro));
		for(i=0;i<n;i++){
			if(vcarro[i].multas==0){
				novo[j++]=vcarro[i];
			}
		}
		return novo;
	}
}

void exibeZerados(Carro vcarro[], int n){
	int i;
	printf("\n\nCARROS COM ZERO MULTAS -- zerados");
	for(i=0;i<n;i++){
		exibeCadastro(&vcarro[i]);
	}
}
