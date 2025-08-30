#include "Altura.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


/* TADS FONECIDOS PELA PROFESSORA */
/* cria uma medida de comprimento como em m e cm*/
struct alt {
    int m,cm;
};
/* fun��es auxiliares */
int converteParacm(Altura * p){
    return p->m *100 + p->cm;
}
/* Fun��es exportadas */
/* Fun��o cria - Aloca e retorna uma altura (m e cm) */
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
/* Fun��o libera - Libera a mem�ria de uma altura previamente criado */
void alt_libera(Altura* p){
    free(p);
}

/* Fun��o acessa - Retorna os valores dde uma altura */
void alt_acessa(Altura* p, int* m, int* cm){
    *m = p->m;
    *cm = p->cm;
}
/* Fun��o atribui - Atribui novos valores �s partes de uma altura */
void alt_atribui(Altura* p, int m, int cm){
      p->m = m;
      p->cm = cm;

}
/* Fun��o exibe -Escreve na tela oa altura  no formato  m,cm */

void alt_exibe(Altura* p){
    printf("\n %d,%02dm",p->m,p->cm);
}

/* Fun��o getAltur- Retorna uma string com os valores dA ALTURA  no formato m,cm*/
char* alt_getAltura(Altura* p){
  char* pt;
  int tam = sizeof(*p)+ 5;
  pt = (char*)malloc(tam);
  sprintf(pt,"%d,%02dm",p->m,p->cm);
  return pt;

}

/*fun��o compara negativo:se o al1 < alt2, 0 se alt1 == alt2, positivo se o alt1 > alt2  */
int alt_compara(Altura *p1, Altura *p2){
    int a1= converteParacm(p1);
    int a2 = converteParacm(p2);
    int dif = a1-a2;
    return dif;
    
}
/*CRIADOS POR MIM*/
/*soma altura*/
Altura *alt_soma(Altura *p1, int n){
	int total=converteParacm(p1)+n;
	int m=total/100;
	int cm=total%100;
	return alt_cria(m, cm);
}
/*copia altura*/
Altura *alt_copia(Altura *p){
	return alt_cria(p->m, p->cm);
}

