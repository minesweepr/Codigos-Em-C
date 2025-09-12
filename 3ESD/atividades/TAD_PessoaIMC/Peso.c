#include "Peso.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct peso{
    int kg;
    int g;
};

int converteParag(Peso *p){
    return (p->kg*1000)+p->g;
}

Peso *peso_cria(int kg, int g){
    Peso *p=(Peso*)malloc(sizeof(Peso));
    if(p==NULL){
        printf("\nmemoria insuficiente");
        exit(1);
    }
    p->kg=kg;
    p->g=g;
    return p;
}

void peso_libera(Peso *p){
    free(p);
}

void peso_acessa(Peso *p, int *kg, int *g){
    *kg=p->kg;
    *g=p->g;
}

void peso_atribui(Peso *p, int kg, int g){
    p->kg=kg;
    p->g=g;
}

void peso_exibe(Peso *p){
    printf("\npeso: %d,%dkg", p->kg, p->g);
}

char *peso_getPeso(Peso *p){
    int tam=snprintf(NULL,0,"peso: %d,%dkg", p->kg, p->g)+1;
    char *str=(char*)malloc(tam*sizeof(char));
    sprintf(str, "peso: %d,%dkg", p->kg, p->g);
    return str;
}

void peso_alteraPeso(Peso *p, int g){
    int peso=converteParag(p)+g;
    peso_atribui(p, peso/100, peso%100);
}
