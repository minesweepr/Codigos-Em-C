#include "Altura.h"
#include "Peso.h"
#include "Pessoa.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
/* cria informacoes pessoa*/
struct pssoa  {
    char *nome;
    Peso *peso;
    Altura *altura;
};

//soma ou subtrai o peso atual da pessoa
void pessoa_alteraPeso(Pessoa *p, int g){
    Peso *aux=p->peso;
    p->peso=peso_soma(p->peso, g);
    free(aux);
}

//soma a altura atual da pessoa
void pessoa_alteraAltura(Pessoa *p, int cm){
    Altura *aux=p->altura;
    p->altura=alt_soma(p->altura, cm);
    free(aux);
} 

//calcula imc da pessoa
char *pessoa_IMC(Pessoa *p){
    float kg=converteParag(p->peso)/(float)100, m=converteParacm(p->altura)/(float)100;
    float imc=(kg/pow(m, 2));//testar
    char *resultado;
    if(imc<18.5){
        resultado=(char*)malloc(15*sizeof(char));
        strcpy(resultado, "abaixo do peso");
    }else if(imc<25){
        resultado=(char*)malloc(7*sizeof(char));
        strcpy(resultado, "normal");
    }else if(imc<30){
        resultado=(char*)malloc(10*sizeof(char));
        strcpy(resultado, "sobrepeso");
    }else{
        resultado=(char*)malloc(10*sizeof(char));
        strcpy(resultado, "obesidade");
    }
    return resultado;
}
/* funcoes auxiliares */
/* funcao cria - Aloca e retorna uma pessoa (kg e g) */
Pessoa* pessoa_cria(int kg, int g, int m, int cm, char *nm){
    Pessoa* p = (Pessoa*) malloc(sizeof(Pessoa));
   if (p == NULL) {
      printf("memoria insuficiente!\n");
      exit(1);
   }
   
   p->altura=alt_cria(m, cm);
   p->peso=peso_cria(kg, g);
   p->nome=(char*)malloc((strlen(nm)+1)*sizeof(char));
   strcpy(p->nome,nm);
   return p;
}
/* funcaolibera - Libera a memoria de uma pessoa previamente criado */
void pessoa_libera(Pessoa* p){
    free(p->nome);
    peso_libera(p->peso);
    alt_libera(p->altura);
    free(p);
}

//funcao acessa, retorna o nome de uma pessoa
void pessoa_acessa(Pessoa *p, char *nm){
    strcpy(nm, p->nome);//ver isso
}

//funcao atribui, atribui um novo nome para uma pessoa
void pessoa_atribui(Pessoa *p, char *nm){
    free(p->nome);
    p->nome=(char*)malloc((strlen(nm)+1)*sizeof(char));
    strcpy(p->nome, nm);
}

/* funcaoexibe -Escreve na tela as informacoes da pessoa */
void pessoa_exibe(Pessoa* p){
    printf("\nnome: %s",p->nome);
    peso_exibe(p->peso);
    alt_exibe(p->altura);
}
