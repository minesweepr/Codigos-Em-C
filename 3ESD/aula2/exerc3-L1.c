#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

struct pdt{
	int cod;
	char descricao[41], classificacao[9], tipo[10];
	float valor;
	int nota;
};
typedef struct pdt TPRODUTO;

//NAO FOI PEDIDO NO TRABALHO, SOMENTE PARA TESTES
void exibeProdutos(TPRODUTO *produto);

void exibeProdutosNaFaixadePrecoRECURSIVA(TPRODUTO tab[], int n, float lim_inf, float lim_sup);
void exibeProdutosNaFaixadePreco(TPRODUTO tab[], int n, float lim_inf, float lim_sup);
void modifica_valor(TPRODUTO *produto);
void separaBonsemTabelas(TPRODUTO tab[], int n,TPRODUTO *tab_nac, int maior_nac, TPRODUTO *tab_imp, int maior_imp);
void compara(int *max, int val, int *qt);
void maiores_valores(TPRODUTO tab[], int n, int *maxN, int *qtN, int *maxI, int *qtI);
TPRODUTO *cria_vetor( int n);

int main (void){
	int maior_nac, qtos_nac, maior_imp, qtos_imp, lim_inf, lim_sup;
	TPRODUTO vet_Produtos[MAX] = { {1,"casaco", "textil", "importado",50, 9},
							   {2,"casaco", "textil", "nacional", 130,10},
							   {3,"damasco", "alimento", "importado",13, 10},
							   {4,"banana passa", "alimento", "nacional",13, 10},
							   {5,"sapato", "textil", "importado",180, 4},
							   {6,"sapato", "textil", "nacional",180, 8},
							   {7,"bolsa", "textil", "importado", 230,8},
							   {8,"bolsa", "textil", "nacional",330, 7},
							   {9,"vinho", "alimento", "importado",160, 10},
							   {10,"vinho", "alimento", "nacional",120, 9}};
	
	maiores_valores(vet_Produtos, MAX, &maior_nac, &qtos_nac, &maior_imp, &qtos_imp);
	TPRODUTO *vet_Produtos_nac=cria_vetor(qtos_nac), *vet_Produtos_imp=cria_vetor(qtos_imp);
	separaBonsemTabelas(vet_Produtos, MAX, vet_Produtos_nac, maior_nac, vet_Produtos_imp, maior_imp);
	
	//NAO FOI PEDIDO NO TRABALHO, SOMENTE PARA TESTES
	int i;
	printf("PRODUTOS NACIONAIS COM A MAIOR NOTA(%d)",maior_nac);
	for(i=0;i<qtos_nac;i++){
		exibeProdutos(&vet_Produtos_nac[i]);
	}
	//NAO FOI PEDIDO NO TRABALHO, SOMENTE PARA TESTES
	printf("\nPRODUTOS IMPORTADOS COM A MAIOR NOTA(%d)",maior_imp);
	for(i=0;i<qtos_imp;i++){
		exibeProdutos(&vet_Produtos_imp[i]);
	}
	
	printf("\n\nINSIRA UMA MARGEM DE PRECO (LIMITE INFERIOR LIMITE SUPERIOR): ");
	scanf("%d %d", &lim_inf, &lim_sup);
	
	exibeProdutosNaFaixadePreco(vet_Produtos, MAX, lim_inf, lim_sup);
	exibeProdutosNaFaixadePrecoRECURSIVA(vet_Produtos, MAX-1, lim_inf, lim_sup);
	return 0;
}

//NAO FOI PEDIDO NO TRABALHO, SOMENTE PARA TESTES
void exibeProdutos(TPRODUTO *produto){
	printf("\nCODIGO: %d", produto->cod);
	printf("\n   > descricao: %s", produto->descricao);
	printf("\n   > classificacao: %s", produto->classificacao);
	printf("\n   > tipo: %s", produto->tipo);
	printf("\n   > valor: R$%.2f\n", produto->valor);
}

void exibeProdutosNaFaixadePrecoRECURSIVA(TPRODUTO tab[], int n, float lim_inf, float lim_sup){
	if(n<0){
		printf("\nPRODUTOS NA MARGEM DE PRECO INSERIDA (VERSAO RECURSIVA):");
		return;
	}
	exibeProdutosNaFaixadePrecoRECURSIVA(tab, n-1, lim_inf, lim_sup);
	if(tab[n].valor>=lim_inf && tab[n].valor<=lim_sup){
		printf("\nCODIGO: %d", tab[n].cod);
		printf("\n   > descricao: %s", tab[n].descricao);
		printf("\n   > tipo: %s\n", tab[n].tipo);
	}
}

void exibeProdutosNaFaixadePreco(TPRODUTO tab[], int n, float lim_inf, float lim_sup){
	int i;
	printf("\nPRODUTOS NA MARGEM DE PRECO INSERIDA:");
	for(i=0;i<n;i++){
		if(tab[i].valor>lim_inf && tab[i].valor<lim_sup){
			printf("\nCODIGO: %d", tab[i].cod);
			printf("\n   > descricao: %s", tab[i].descricao);
			printf("\n   > tipo: %s\n", tab[i].tipo);
		}
	}
}

void modifica_valor(TPRODUTO *produto){
	if(strcmp(produto->classificacao,"textil")==0){
		produto->valor*=1.1;
	} else{
		produto->valor*=0.9;
	}
}

void separaBonsemTabelas(TPRODUTO tab[], int n,TPRODUTO *tab_nac, int maior_nac, TPRODUTO *tab_imp, int maior_imp){
	int j=0, k=0, i;
	for(i=0;i<n;i++){
		if(strcmp(tab[i].tipo, "nacional")==0 && tab[i].nota==maior_nac){
			tab_nac[j++]=tab[i];
		}
		if(strcmp(tab[i].tipo, "importado")==0 && tab[i].nota==maior_imp){
			modifica_valor(&tab[i]);
			tab_imp[k++]=tab[i];
		}
	}
}

void compara (int *max, int val, int *qt){
	if ( *max < val){
		*max = val;
		*qt = 1;
	}
	else if ( *max == val){
		(*qt)++;
	}
}

void maiores_valores(TPRODUTO tab[],int n, int *maxN,int *qtN, int *maxI, int *qtI){
	int i;
	(*maxN)= (*maxI)=-1;
	for(i=0; i<n ; i++){
		if (strcmp(tab[i].tipo,"importado")==0){
			compara(maxI,tab[i].nota,qtI);
		} else{
		compara(maxN,tab[i].nota,qtN);
		}
	}
	return;
}

TPRODUTO *cria_vetor( int n){
	TPRODUTO *v=(TPRODUTO*)malloc(n*sizeof(TPRODUTO));
	if( v == NULL){
		printf("erro");
		exit(1);
	}
	return v;
}
