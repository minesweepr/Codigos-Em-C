#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "aluno.h"

struct aluno{
	int mat;
	char nome[21];
	float nota;
	char sexo;
	struct aluno *prox;
};
//FUNCOES AUXILIARES
//pega a maior nota
float maior_nota(Aluno *l){
	Aluno *aux=l->prox;
	float maior=l->nota;
	while(aux->prox!=NULL){
		if(maior<aux->nota) maior=aux->nota;
		aux=aux->prox;
	}
	return maior;
}
//FUNCOES PRINCIPAIS
/* função de criação: retorna uma lista vazia */
Aluno *lista_cria(void){
	return NULL;
}

void lista_libera(Aluno *l){
	Aluno *p=l, *aux;
	while(p!=NULL){
		aux=p->prox;
		free(p);
		p=aux;
	}
}

/*recebe o endereço do 1º elemento da lista e os dados de um novo elemento.
Esta função deve criar um novo nó, colocá-lo com o primeiro nó da lista e retornar o endereço do novo nó
para que o ponteiro para o primeiro elemento da lista seja atualizado.*/
Aluno *lista_insere(Aluno *l, int mat, char *nome, float nota, char sexo){
	Aluno *novo=(Aluno*)malloc(sizeof(Aluno));
	if(novo==NULL) exit(1);
	novo->mat=mat;
	strcpy(novo->nome, nome);
	novo->nota=nota;
	novo->sexo=sexo;
	novo->prox=l;
	return novo;
}

/*recebe uma lista de alunos e retorna o número de alunos nessa
lista.*/
int conta_elementos(Aluno *l){
	if(l==NULL) return 0;
	return 1+conta_elementos(l->prox);
}

/*recebe uma lista de alunos e exibe a matrícula, o nome, a
nota e o sexo de todos os alunos na ordem inversa que estão na lista.*/
void exibe_listaRecursiva(Aluno *l){
	if(l==NULL) return;
	exibe_listaRecursiva(l->prox);
	exibe_aluno(l);
}

/*recebe uma lista de alunos e exibe a matrícula, o nome, a nota e o sexo
de todos os alunos.*/
void exibe_listaIterativa(Aluno *l){
	if(l==NULL)return;
	while(l!=NULL){
		exibe_aluno(l);
		l=l->prox;
	}
}

//exibe um unico aluno
void exibe_aluno(Aluno *l){
	printf("\nMATRICULA: %d\nNome: %s | Nota: %.2f | Sexo: %c\n",
			l->mat, l->nome, l->nota, l->sexo);
}

/*recebe uma lista de alunos e um sexo, e retorna o número
de pessoas com esse sexo na lista.*/
int conta_sexo(Aluno *l, char sexo){
	if(l==NULL)return 0;
	return (l->sexo==sexo)+conta_sexo(l->prox, sexo);
}

//11 8 6 3 2 >10<
/*recebe uma lista de alunos e uma nota, e copia em uma nova lista os
alunos que tem nota >= nota recebida, incluindo nesta nova lista de forma ordenada por mat.*/
Aluno *copia_lista(Aluno *l, float nota){
	Aluno *novo=lista_cria();
	while(l!=NULL){
		if(l->nota>=nota){
			Aluno *aux=(Aluno*)malloc(sizeof(Aluno));
			*aux=*l;
			aux->prox=NULL;
			if(novo==NULL||aux->mat>=novo->mat){
				aux->prox=novo;
				novo=aux;
			}else{
				Aluno *p=novo;
				while(p->prox!=NULL && p->prox->mat<aux->mat){
					p=p->prox;
				}
				aux->prox=p->prox;
				p->prox=aux;
			}		
		}
		l=l->prox;
	}
	
	return novo;
}

/*recebe uma lista de alunos, e uma matrícula e retorna o
endereço do nó que contém esta matrícula, se o mesmo existir. ou NULL caso contrário*/
Aluno *busca_aluno_da_lista(Aluno *l, int mat){
	while(l!=NULL){
		if(l->mat==mat) return l;
		l=l->prox;
	}
	
	return NULL;
}

/*recebe uma lista de alunos, e remove o primeiro
aluno da lista, se o mesmo existir.*/
Aluno *remove_primeiro_aluno_da_lista(Aluno *l){
	if(l==NULL) return NULL;
	Aluno *novo=l->prox;
	free(l);
	return novo;
}

//1 >2< 3 4 5 6 7
/*recebe uma lista de alunos, e remove o segundo
aluno da lista, se o mesmo existir.*/
Aluno *remove_segundo_aluno_da_lista(Aluno *l){
	if(l==NULL||l->prox==NULL) return NULL;
	Aluno *aux=l->prox;
	l->prox=aux->prox;
	free(aux);
	return l;
}

//1 2 3 4 5 6 >7<
/*recebe uma lista de alunos, e remove o último aluno
da lista, se o mesmo existir.*/
Aluno *remove_ultimo_aluno_da_lista(Aluno *l){
	if(l==NULL) return NULL;
	if(l->prox==NULL){
		free(l);
		return NULL;
	}
	Aluno *p=l;
	while(p->prox->prox!=NULL){
		p=p->prox;
	}
	free(p->prox);
	p->prox=NULL;
	return l;
}

/*recebe uma lista de alunos, e a divide em duas ( na metade). Retorna o
endereço do primeiro nó da segunda metade*/
Aluno *divide_lista(Aluno *l){
	if(l==NULL||l->prox==NULL)return NULL;
	Aluno *l2, *p=l;
	int metade=conta_elementos(l)/2, i;
	for(i=1;i<metade;i++){p=p->prox;}
	l2=p->prox;
	p->prox=NULL;
	return l2;
}

//separa uma lista por sexo e retorna o que foi escolhido
Aluno *divide_lista_por_sexo(Aluno *l, char sexo){
	if(l==NULL)return NULL;
	Aluno *lSexo=lista_cria();
	while(l!=NULL){
		if(l->sexo==sexo){
			lSexo=lista_insere(lSexo, l->mat, l->nome, l->nota, l->sexo);
		}
		l=l->prox;
	}
	return lSexo;
}

/*recebe uma lista de alunos do sexo ‘M’, encontra a maior nota e coloca
todos os alunos com esta maior nota no início da lista. Retorna o endereço do primeiro nó da lista (DESAFIO)*/
Aluno *muda_lista(Aluno *l){ 
    if(l==NULL||l->prox==NULL)return l; 
    Aluno *p=l->prox, *aux=l; 
    float maiorNota=maior_nota(l); 
    while(p!=NULL){ 
        if(p->nota==maiorNota){ 
            aux->prox=p->prox; 
            p->prox=l; 
            l=p; 
            p=aux->prox; 
            
        } else{ 
            aux=p; 
            p=p->prox; 
            
        } 
    } 
    return l; 
}
//11 22 44 insert(33)
/*DESAFIO1: Escreva a função ordena_lista(), que recebe uma lista de alunos do sexo ‘F’, e ordena-a por mat.
Retorna o endereço do primeiro nó da lista ordenada. NOTA: SUPONTO QUE SEJA CRESCENTE!*/
Aluno *ordena_lista(Aluno *l){
	if(l==NULL||l->prox==NULL)return l;
	Aluno *p=l, *nova=lista_cria();
	while(p!=NULL){
		Aluno *atual=p;
		p=p->prox;
		atual->prox=NULL;
		if(nova==NULL||atual->mat<nova->mat){
			atual->prox=nova;
			nova=atual;
		}else{
			Aluno *aux=nova;
			while(aux->prox!=NULL && aux->prox->mat < atual->mat){
				aux=aux->prox;
			}
			atual->prox=aux->prox;
			aux->prox=atual;
		}
	}
	return nova;
}

/*DESAFIO2: Escreva a função junta_listas(), que recebe uma lista de alunos do sexo ‘F’ ordenada por mat e a
lista gerada pela copia_lista, criando uma nova lista com a união das dus listas recebidas, mantendo a
ordenação. Retorna o endereço do primeiro nó da lista resultante.*/
Aluno *junta_listas(Aluno *l1, Aluno *l2){
	if(l1==NULL) return l2;
	if(l2==NULL) return l1;
	Aluno *aux=l1;
	while(aux->prox!=NULL){
		aux=aux->prox;
	}
	aux->prox=l2;
	return l1;
}




