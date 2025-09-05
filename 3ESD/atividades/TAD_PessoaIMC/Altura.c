#include "Altura.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* TADS FONECIDOS PELA PROFESSORA */
/* cria uma medida de comprimento como em m e cm*/
struct alt {
    int m,cm;
};
/* funcaes auxiliares */
int converteParacm(Altura * p){
    return p->m *100 + p->cm;
}
/* Funcaes exportadas */
/* Funcao cria - Aloca e retorna uma altura (m e cm) */
Altura* alt_cria(int m, int cm){
    Altura* p = (Altura*) malloc(sizeof(Altura));
   if (p == NULL) {
      printf("Mem�ria insuficiente!\n");
      exit(1);
   }
   p->m = m;
   p->cm = cm;
   return p;
}
/* Funcao libera - Libera a memoria de uma altura previamente criado */
void alt_libera(Altura* p){
    free(p);
}

/* Funcao acessa - Retorna os valores dde uma altura */
void alt_acessa(Altura* p, int* m, int* cm){
    *m = p->m;
    *cm = p->cm;
}
/* Funcao atribui - Atribui novos valores as partes de uma altura */
void alt_atribui(Altura* p, int m, int cm){
      p->m = m;
      p->cm = cm;

}
/* Funcao exibe -Escreve na tela oa altura  no formato  m,cm */

void alt_exibe(Altura* p){
    printf("\naltura: %d,%02dm",p->m,p->cm);
}

/* Funcao getAltur- Retorna uma string com os valores dA ALTURA  no formato m,cm*/
char* alt_getAltura(Altura* p){
  char* pt;
  int tam = sizeof(*p)+ 5;
  pt = (char*)malloc(tam);
  sprintf(pt,"%d,%02dm",p->m,p->cm);
  return pt;

}

/*funcao compara negativo:se o al1 < alt2, 0 se alt1 == alt2, positivo se o alt1 > alt2  */
int alt_compara(Altura *p1, Altura *p2){
    int a1= converteParacm(p1);
    int a2 = converteParacm(p2);
    int dif = a1-a2;
    return dif;
    
}
//soma altura
Altura *alt_soma(Altura *p1, int n){
	int total=converteParacm(p1)+n;
	int m=total/100;
	int cm=total%100;
	return alt_cria(m, cm);
}