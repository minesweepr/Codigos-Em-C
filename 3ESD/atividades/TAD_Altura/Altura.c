#include "Altura.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct alt{
  int m;
  int cm;
};

int converteParacm(Altura *a){
    return (a->m*100)+a->cm;
}

Altura *alt_cria(int m, int cm){
    Altura *a=(Altura*)malloc(sizeof(Altura));
    if(a==NULL){
        printf("\nmemoria insuficiente");
        exit(1);
    }
    a->m=m;
    a->cm=cm;
    return a;
}

void alt_libera(Altura *a){
    free(a);
}

void alt_acessa(Altura *a, int *m, int *cm){
    *m=a->m;
    *cm=a->cm;
}

void alt_atribui(Altura *a, int m, int cm){
    a->m=m;
    a->cm=cm;
}

void alt_exibe(Altura *a){
    printf("\n%d,%dm", a->m, a->cm);
}

char *alt_getAltura(Altura *a){
    int tam=snprintf(NULL, 0, "%d,%dm", a->m, a->cm)+1;
    char *str=(char*)malloc(tam*sizeof(char));
    sprintf(str, "%d,%dm", a->m, a->cm);
    return str;
}

int alt_compara(Altura *a1, Altura *a2){
    int a1_cm=converteParacm(a1);
    int a2_cm=converteParacm(a2);
    return a1_cm-a2_cm;
}

Altura *alt_diferenca(Altura *a1, Altura *a2){
    int dif=abs(alt_compara(a1, a2));
    int d_m=dif/100;
    int d_cm=dif%100;
    Altura *d=alt_cria(d_m, d_cm);
    return d;
}

Altura *alt_soma(Altura *a, int cm){
    int soma=converteParacm(a)+cm;
    int s_m=soma/100;
    int s_cm=soma%100;
    Altura *s=alt_cria(s_m, s_cm);
    return s;
}

Altura *alt_copia (Altura *a){
    return alt_cria(a->m, a->cm);
}
