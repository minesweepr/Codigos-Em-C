/*Quest�o 1 :

1.f) Escreva a fun��o merge_especial( ) que recebe duas listas do tipo t_lista_cli ordenadas por
identidade e faz um merge especial resultando em duas novas listas ordenadas: na primeira lista
ficam os elementos que s� aparecem em uma das listas originais e na segunda lista ficam
aqueles que aparecem nas duas listas, ou seja, que t�m duas ocorr�ncias. A fun��o deve
retornar as duas listas resultantes. Aten��o: essa fun��o deve ser a mais eficiente poss�vel.*/
#include "loja.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#define MAX 5
struct t_cli{
	char nome[21];
	int id;
	int idade;
	char sexo;
	char telefone[10];
};

struct t_lista_cliente{
	struct t_cli clientes[MAX];
	int quant;
};

//FUNCOES PRIMARIAS
tListaC *inic_ord(void){
	tListaC *pl=(tListaC*)malloc(sizeof(tListaC));
	pl->quant=0;
	return pl;
}

int eh_vazia_ord(tListaC *p){
	return (p->quant==0);
}

/* t_lista_cli definido anteriormente. A ordena��o da lista � pelo
campo identidade. A busca_ord( ) deve levar em conta a ordena��o, assim como, obviamente, a
ins_ord( ) deve preservar a ordena��o. Essas duas fun��es devem retornar 1 quando realizadas
com sucesso e 0 em caso contr�rio. Caso o elemento j� esteja na lista, a ins_ord( ) deve retornar
(-1).*/
int busca_ord(tListaC *p, int id, int *pos){
	int inicio=0, fim=p->quant-1, meio;
	while(inicio<=fim){
		meio=(inicio+fim)/2;
		if(p->clientes[meio].id==id){
			*pos=meio;
			return 1;
		} else if(p->clientes[meio].id<id){
			inicio=meio+1;
		} else fim=meio-1;
	}
	*pos=inicio;
	return 0;
}

int ins_ord(tListaC *p, tCli cliente){
	if(p->quant==MAX) return 0;
	int pos;
	if(busca_ord(p, cliente.id, &pos)) return -1;
	memcpy(&p->clientes[pos+1], &p->clientes[pos], sizeof(tCli)*(p->quant-pos));
	//o primeiro � o destino da posi��o pra frente, o segundo � a origem, o terceiro � a quantidade de elementos q precisa ser deslocado
	p->clientes[pos]=cliente;
	p->quant++;
	return 1;
}

/*Escreva a fun��o l�_dados_de_um_cliente( ) que l� do teclado os dados de um cliente do
tipo t_cli acima, retornando-os. A fun��o retorna 1 se for feita uma leitura v�lida, ou 0, quando
uma identidade menor ou igual a 0 for lida.*/
int le_dados_de_um_cliente(tCli *cliente){
	printf("\nidentidade: ");
	scanf("%d", &cliente->id);
	getchar();
	if(cliente->id<=0)return 0;
	printf("nome: ");
	fgets(cliente->nome, sizeof(cliente->nome), stdin);
	cliente->nome[strcspn(cliente->nome, "\n")]='\0';
	printf("idade: ");
	scanf("%d", &cliente->idade);
	printf("sexo: ");
	scanf(" %c", &cliente->sexo);
	getchar();
	printf("telefone: ");
	fgets(cliente->telefone, sizeof(cliente->telefone), stdin);
	cliente->telefone[strcspn(cliente->telefone, "\n")]='\0';
	printf("-------------");
	
	return 1;
}

/*Escreva a fun��o constr�i_lista_clientes( ) que, utilizando as fun��es dos itens 1.c e 1.d,
constr�i uma lista ordenada de clientes, retornando-a. A fun��o deve retornar 1 se realizada
com sucesso e 0 em caso contr�rio.*/
int constroi_lista_clientes(tListaC **p){
	*p=inic_ord();
	tCli cliente;
	while(le_dados_de_um_cliente(&cliente)){
		if(!ins_ord(*p, cliente))return 0;
	}
	return 1;
}

/*Escreva a fun��o merge_especial( ) que recebe duas listas do tipo t_lista_cli ordenadas por
identidade e faz um merge especial resultando em duas novas listas ordenadas: na primeira lista
ficam os elementos que s� aparecem em uma das listas originais e na segunda lista ficam
aqueles que aparecem nas duas listas, ou seja, que t�m duas ocorr�ncias. A fun��o deve
retornar as duas listas resultantes. Aten��o: essa fun��o deve ser a mais eficiente poss�vel.*/
void merge_especial(tListaC *l1, tListaC *l2, tListaC **uni, tListaC **dup){
	*uni=inic_ord();
	*dup=inic_ord();
	int i=0, j=0;
	while(l1->quant>i && l2->quant>j){
		if(l1->clientes[i].id==l2->clientes[j].id){
			ins_ord(*dup, l1->clientes[i]);
			i++;
			j++;
		} else if(l1->clientes[i].id<l2->clientes[j].id){
			ins_ord(*uni, l2->clientes[j]);
			j++;
		} else{
			ins_ord(*uni, l1->clientes[i]);
			i++;
		}
	}
	while(i<l1->quant) ins_ord(*uni, l1->clientes[i++]);
    while(j<l2->quant) ins_ord(*uni, l2->clientes[j++]);
}

void exibe_lista(tListaC *p){
	for(int i=0;i<p->quant;i++){
		printf("\nidentidade: %d | nome: %s | idade: %d | sexo: %c | telefone: %s\n", 
		p->clientes[i].id, p->clientes[i].nome, p->clientes[i].idade, p->clientes[i].sexo, p->clientes[i].telefone);
	}
}
