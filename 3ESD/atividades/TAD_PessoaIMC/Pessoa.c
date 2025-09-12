#include "Altura.h"
#include "Peso.h"
#include "Pessoa.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct pessoa{
    char *nome;
    Altura *altura;
    Peso *peso;
};

Pessoa *pessoa_cria(char *nome, int m, int cm, int kg, int g){
    Pessoa *p=(Pessoa*)malloc(sizeof(Pessoa));
    if(p==NULL){
        printf("\nmemoria insuficiente");
        exit(1);
    }
    
    p->nome=(char*)malloc(strlen(nome)+1*sizeof(char));
    strcpy(p->nome, nome);
    p->altura=alt_cria(m, cm);
    p->peso=peso_cria(kg, g);
    return p;
}

void pessoa_libera(Pessoa *p){
    free(p->nome);
    peso_libera(p->peso);
    alt_libera(p->altura);
    free(p);
}

void pessoa_acessaNome(Pessoa *p, char *nome){
    nome=(char*)malloc(strlen(p->nome)+1*sizeof(char));
    strcpy(nome, p->nome);
}

void pessoa_acessaAltura(Pessoa *p, int *m, int *cm){
    alt_acessa(p->altura, m, cm);
}

void pessoa_acessaPeso(Pessoa *p, int *kg, int *g){
    peso_acessa(p->peso, kg, g);
}

void pessoa_atribuiNome(Pessoa *p, char *nome){
    free(p->nome);
    p->nome=(char*)malloc(strlen(nome)*sizeof(char)+1);
    strcpy(p->nome, nome);
}

void pessoa_atribuiAlt(Pessoa *p, int m, int cm){
    alt_atribui(p->altura, m, cm);
}

void pessoa_atribuiPeso(Pessoa *p, int kg, int g){
    peso_atribui(p->peso, kg, g);
}

void pessoa_exibe(Pessoa *p){
    printf("\nnome: %s", p->nome);
    alt_exibe(p->altura);
    peso_exibe(p->peso);
}

char *pessoa_getNome(Pessoa *p){
    int tam=snprintf(NULL, 0, "nome: %s", p->nome)+1;
    char *str=(char*)malloc(tam*sizeof(char));
    sprintf(str,"nome: %s", p->nome);
    return str;
}

char *pessoa_getAltura(Pessoa *p){
    return alt_getAltura(p->altura);
}

char *pessoa_getPeso(Pessoa *p){
    return peso_getPeso(p->peso);
}

void pessoa_alteraPeso(Pessoa *p, int g){
    peso_alteraPeso(p->peso, g);
}

void pessoa_alteraAltura(Pessoa *p, int cm){
    alt_alteraAltura(p->altura, cm);
}

float pessoa_IMC(Pessoa *p){
    int kg, g;
    pessoa_acessaPeso(p, &kg, &g);
    float peso=kg+g/(float)1000;
    
    int m, cm;
    pessoa_acessaAltura(p, &m, &cm);
    float altura=m+cm/(float)100;
    return peso/pow(altura, 2);
}

char *pessoa_categorizaIMC(Pessoa *p){
    float imc=pessoa_IMC(p);
    char *str;
    if(imc>=30){
        str=(char*)malloc(10*sizeof(char));
        strcpy(str, "obesidade");
    }else if(imc>=25){
        str=(char*)malloc(10*sizeof(char));
        strcpy(str, "sobrepeso");
    }else if(imc>=18.5){
        str=(char*)malloc(7*sizeof(char));
        strcpy(str, "normal");
    }else{
        str=(char*)malloc(15*sizeof(char));
        strcpy(str, "abaixo do peso");
    }
    return str;
}
