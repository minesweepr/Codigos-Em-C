#include "LDEC.h"
#include<stdio.h>
#include<stdlib.h>

struct tno{
    int num;
    struct tno *prox;
    struct tno *ant;
};
struct tlista{
  tNo *cabeca;//considerando que ela sempre sera ordenada e sem repeticao, logo nao inclui eles aq
};

//FUNCOES AUXILIARES
tNo *cria_no(int num){
    tNo *no=(tNo*)malloc(sizeof(tNo));
    no->num=num;
    no->prox=no->ant=NULL;
    return no;
}

void libera_no(tLista *l){
    tNo *no=l->cabeca->prox, *aux;
    while(aux!=l->cabeca){
        aux=no->prox;
        free(no);
        no=aux;
    };
}

int busca_ordenadaSemRep(tLista *l, tNo **pos, int num){
    tNo *aux=l->cabeca->prox;
    while(aux!=l->cabeca && aux->num<num){
        aux=aux->prox;
    }
    *pos=aux;
    if(aux!=l->cabeca && aux->num==num)return 0;
    return 1;
}

//FUNCOES PRINCIPAIS
//funcao cria e retorna uma nova lista
tLista *cria_lista(){//ja estou considerando q so pode ser ordenada e sem repeticao
    tLista *l=(tLista*)malloc(sizeof(tLista));
    tNo *cabeca=cria_no(-1);
    
    cabeca->prox=cabeca->ant=cabeca;
    l->cabeca=cabeca;
    return l;
}

//inclui um novo numero a lista
int lista_inclui(tLista *l, int num){
    tNo *pos;
    
    if(!busca_ordenadaSemRep(l, &pos, num))return 0;
    tNo *novoNo=cria_no(num);
    
    novoNo->prox=pos;
    novoNo->ant=pos->ant;
    pos->ant->prox=novoNo;
    pos->ant=novoNo;
    return 1;
}

//remove um numero da lista
int lista_remove(tLista *l, int num){
    tNo *pos;
    if(lista_estaVazia(l))return 0;
    if(busca_ordenadaSemRep(l, &pos, num))return -1;
    
    pos->ant->prox=pos->prox;
    pos->prox->ant=pos->ant;
    free(pos);
    
    return 1;
}

//exibe uma lista encadeada circular
void lista_exibe(tLista *l){
    tNo *aux=l->cabeca->prox;
    while(aux!=l->cabeca){
        printf("%d ", aux->num);
        aux=aux->prox;
    };
    printf("\n");
}

//checa se esta vazia ou nao
int lista_estaVazia(tLista *l){
    return (l->cabeca->prox==l->cabeca)?1:0;//1=esta vazia 0=nao esta vazia
}

//atribui e retorna o valor desejado da lista
//-->cabeca
void listaAtribui_cabeca(tLista *l, tNo *cabeca){
    l->cabeca=cabeca;
}

//acessa e retorna o valor desejado da lista
//-->cabeca
void listaAcessa_cabeca(tLista *l, tNo **cabeca){
    *cabeca=l->cabeca;
}

//libera tudo de uma lista
void libera_lista(tLista *l){
    if(l==NULL) return;
    
    libera_no(l);
    free(l->cabeca);
    free(l);
}
