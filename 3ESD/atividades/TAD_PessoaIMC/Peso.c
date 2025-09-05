#include "Peso.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


/* cria peso em kg e g*/
struct pes {
    int kg,g;
};
/* funcoes auxiliares */
int converteParag(Peso * p){
    return p->kg *100 + p->g;
}
/* funcao cria - Aloca e retorna um Peso (kg e g) */
Peso* peso_cria(int kg, int g){
    Peso* p = (Peso*) malloc(sizeof(Peso));
   if (p == NULL) {
      printf("memoria insuficiente!\n");
      exit(1);
   }
   p->kg = kg;
   p->g = g;
   return p;
}
/* funcaolibera - Libera a memoria de um Peso previamente criado */
void peso_libera(Peso* p){
    free(p);
}

/* funcao acessa - Retorna os valores de um Peso */
void peso_acessa(Peso* p, int* kg, int* g){
    *kg = p->kg;
    *g = p->g;
}
/* funcao atribui - Atribui novos valores as partes de ukga Peso */
void peso_atribui(Peso* p, int kg, int g){
      p->kg = kg;
      p->g = g;

}
/* funcaoexibe -Escreve na tela o Peso no formato  kg,g */

void peso_exibe(Peso* p){
    printf("\npeso: %d,%02dkg",p->kg,p->g);
}

/* Funcao getAltur- Retorna ukga string cokg os valores dA Peso  no forkgato kg,g*/
char* peso_getPeso(Peso* p){
  char* pt;
  int tam = sizeof(*p)+ 5;
  pt = (char*)malloc(tam);
  sprintf(pt,"%d,%02dkg",p->kg,p->g);
  return pt;
}

/*funcao compara negativo:se o al1 < alt2, 0 se alt1 == alt2, positivo se o alt1 > alt2  */
int peso_compara(Peso *p1, Peso *p2){
    int a1= converteParag(p1);
    int a2 = converteParag(p2);
    int dif = a1-a2;
    return dif;
    
}
/*soma os pesos*/
Peso *peso_soma(Peso *p1, int n){
	int total=converteParag(p1)+n;
	int kg=total/100;
	int g=total%100;
	return peso_cria(kg, g);
}
