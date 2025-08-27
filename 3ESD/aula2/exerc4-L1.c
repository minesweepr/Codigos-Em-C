#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define N 8

struct medidas{
	float altura;
	float peso;
};
typedef struct medidas Medidas;

struct candidato{
	int inscricao;
	char nome[51];
	int idade;
	Medidas med;
};
typedef struct candidato Candidato;

void mostraIMCBons(Candidato vcand[], int n);
Candidato *buscaInscricao(Candidato vcand[], int n, int insc);
void exibeTodosCandidatos(Candidato vcand[], int n);
void exibeCandidato(Candidato *c);

int main (){
	int insc;
	Candidato vcand[N]={
        {111,"bia",15,{1.60,60.0}},
        {222,"edu",17,{1.80,86.0}},
        {333,"leo",14,{1.75,91.0}},
        {666,"rui",13,{1.90,70.0}},
        {555,"vik",18,{1.50,50.0}},
        {888,"ana",16,{1.60,55.6}},
        {444,"teo",16,{1.70,70.0}},
        {777,"lia",15,{1.65,55.4}}
    };
    printf("LISTA DE CANDIDATOS");
    exibeTodosCandidatos(vcand, N);
    
    printf("\nBUSCA POR INSCRICAO -- digite a inscricao que deseja encontrar\nR: ");
    scanf("%d", &insc);
    
    Candidato *resp=buscaInscricao(vcand, N, insc);
    if(resp==NULL){
    	printf("\ninscricao nao encontrada.");
	} else{
		exibeCandidato(resp);
	}
	
	printf("\n\nCANDIDATOS COM IMC BOM");
	mostraIMCBons(vcand, N);
    
    return 0;
}

void mostraIMCBons(Candidato vcand[], int n){
	int i;
	float imc;
	for(i=0;i<n;i++){
		imc=vcand[i].med.peso/pow(vcand[i].med.altura, 2);
		if(imc>=18.5 && imc<=24.9){
			exibeCandidato(&vcand[i]);
		}
	}
}

Candidato *buscaInscricao(Candidato vcand[], int n, int insc){
	int i;
	for(i=0;i<n;i++){
		if(vcand[i].inscricao==insc){
			return &vcand[i];
		}
	}
	return NULL;
}

void exibeTodosCandidatos(Candidato vcand[], int n){
	int i;
	for(i=0;i<n;i++){
		exibeCandidato(&vcand[i]);
		printf("\n  > imc: %.2f\n", vcand[i].med.peso/pow(vcand[i].med.altura, 2));
	}
}

void exibeCandidato(Candidato *c){
	printf("\nINSCRICAO: %d", c->inscricao);
	printf("\n  > nome: %s", c->nome);
	printf("\n  > idade: %d", c->idade);
	printf("\n  > altura: %.2fm", c->med.altura);
	printf("\n  > peso: %.2fkg", c->med.peso);
}
