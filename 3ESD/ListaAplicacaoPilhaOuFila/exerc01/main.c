#include "loja.h"
#include<stdio.h>
#include<stdlib.h>

int main() {
	tListaC *l1, *l2;
	printf("CRIACAO DE LISTAS");
	printf("\nlista 1:");
	if(constroi_lista_clientes(&l1)) printf("\n\nlista sequencial construida com sucesso");
	else printf("\n\nnao foi possivel construir a lista");
	
	printf("\n\nlista 2");
	if(constroi_lista_clientes(&l2)) printf("\n\nlista sequencial construida com sucesso");
	else printf("\n\nnao foi possivel construir a lista");
	
	printf("\n\nEXIBICAO DE LISTAS");
	printf("\nlista 1:");
	exibe_lista(l1);
	
	printf("\n\nlista 2:");
	exibe_lista(l2);
	tListaC *unica, *duplicada;
	
	printf("\n\nMERGE ESPECIAL");
	merge_especial(l1, l2, &unica, &duplicada);
	printf("\nlista de elementos unicos:");
	exibe_lista(unica);
	
	printf("\n\nlista de elementos iguais:");
	exibe_lista(duplicada);
	
	free(l1);
	free(l2);
	free(unica);
	free(duplicada);
	return 0;
}
