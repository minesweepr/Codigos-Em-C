/*Questão 2 :
Duas crianças brincam de passar mensagens em código escrevendo as seqüências de não vogais
de trás para frente.
Exemplo: PROVA DE ESTRUTURAS DE DADOS vira RPOVAD E ERTSUTURAD SED ADOS

2.3) Escreva a função decifra( ), para ler uma mensagem codificada do teclado, caracter a
caracter, e depois apresentar a mensagem original na tela. Sua função retorna 1 se realizada
com sucesso ou 0 em caso contrário.
ATENÇÃO: Não use vetores (ou strings) soltos. Utilize apenas estruturas dos tipos dos itens 2.1 e
2.2, assim como só as manipule utilizando as suas funções específicas.
Obs: Considere apenas letras maiúsculas.*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "LSPF.h"
#define MAX 50

struct no{
	char dados;
};

struct pilha{
	tNo vnos[MAX];
	int topo;
	int maximo;
};

struct fila{
	tNo vnos[MAX];
	int F, R;//front=inicio, rabo=fim
	int maximo;
};

//FUNCOES AUXILIARES
tNo cria_no(char dados){
	tNo no;
	no.dados=dados;
	return no;
}

//Pilha
int eh_vaziaPilha(tPilha *p){
	return (p->topo==-1);
}

int eh_cheiaPilha(tPilha *p){
	return (p->topo==p->maximo-1);
}

tPilha *cria_pilhaVazia(){
    tPilha *p=(tPilha*)malloc(sizeof(tPilha));
    if(!p) return NULL;
    p->topo=-1;
    p->maximo=MAX;
    return p;
}

int insere_pilhaPush(tPilha *p, char dados){
	if(eh_cheiaPilha(p))return 0;
	p->topo++;
	p->vnos[p->topo]=cria_no(dados);
	return 1;
}

int remove_pilhaPop(tPilha *p, char *removido){
	if(eh_vaziaPilha(p)) return 0;
	*removido=p->vnos[p->topo].dados;
	p->topo--;
	return 1;
}
//Fila
int eh_vaziaFila(tFila *p){
	return (p->F>p->R);
}

int eh_cheiaFila(tFila *p){
	return (p->R==p->maximo-1);
}

tFila *cria_filaVazia(){
	tFila *p=(tFila*)malloc(sizeof(tFila));
    if(!p)return NULL;
	p->F=0;
	p->R=-1;
	p->maximo=MAX;
	return p;
}

int insere_filaEnqueue(tFila *p, char dados){
	if(eh_cheiaFila(p))return 0;
	p->R++;
	p->vnos[p->R]=cria_no(dados);
	return 1;
}

int remove_filaDequeue(tFila *p, char *removido){
	if(eh_vaziaFila(p))return 0;
	*removido=p->vnos[p->F].dados;
	p->F++;
	if(p->F==p->R) p=cria_filaVazia();
	return 1;
}

//FUNCOES PRIMARIAS
/*2.3) Escreva a função decifra( ), para ler uma mensagem codificada do teclado, caracter a
caracter, e depois apresentar a mensagem original na tela. Sua função retorna 1 se realizada
com sucesso ou 0 em caso contrário.
PROVA DE ESTRUTURAS DE DADOS vira RPOVAD E ERTSUTURAD SED ADOS*/
int decifrar(){
	tPilha *p=cria_pilhaVazia();
	tFila *f=cria_filaVazia();
	if (!p || !f) return 0;
	char vogais[]="AEIOU";//https://www.geeksforgeeks.org/c/c-program-to-check-vowel-or-consonant/
	char c;
	while((c=getchar())!='\n'){
		if(strchr(vogais, c)==NULL){
			insere_pilhaPush(p, c);
		}
		else{
			char aux;
			while(remove_pilhaPop(p, &aux))insere_filaEnqueue(f, aux);
			insere_filaEnqueue(f, c);
		}
	}
	if(!eh_vaziaPilha(p)){
		while(remove_pilhaPop(p, &c))insere_filaEnqueue(f, c);
	}
	
	for(int i=0;i<=f->R;i++){
		putchar(f->vnos[i].dados);
	}
	putchar('\n');
	free(p);
	free(f);
	return 1;
}

