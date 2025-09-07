#include "Produto.h"

struct produto{
	char *identificacao;
	char *codigoBarras;
	float preco;
	int qt;
	Unidade **unidades;
};

//funcao que cria e retorna um produto
Produto *produto_cria(char *identificacao, char *codigoBarras, float preco, int qt){
	Produto *p=(Produto*)malloc(sizeof(Produto));
	if(p==NULL){
		printf("\nmemoria insuficiente.");
		exit(1);
	}
	
	if(identificacao){
       p->identificacao=(char*)malloc((strlen(identificacao)+1)*sizeof(char));
       strcpy(p->identificacao, identificacao);
   }else{
       p->identificacao=(char*)malloc((strlen("Produto")+1)*sizeof(char));
       strcpy(p->identificacao, "Produto");
   }
   
   if(codigoBarras){
       p->codigoBarras=(char*)malloc((strlen(codigoBarras)+1)*sizeof(char));
       strcpy(p->codigoBarras, codigoBarras);
   }else{
       p->codigoBarras=(char*)malloc(sizeof(char));
       strcpy(p->codigoBarras, "");
   }
	
	p->preco=preco;
	p->qt=qt;
	p->unidades=(Unidade**)malloc(qt*sizeof(Unidade*));
	
	return p;
}

//funcao cria uma unidade
void produto_criaUnidade(Produto *p, int lote, int dia, int mes, int ano, int i){
    p->unidades[i]=unidade_criar(lote, dia, mes, ano);
}

//funcao que libera as memorias alocadas em um produto
void produto_libera(Produto *p){
	free(p->identificacao);
	free(p->codigoBarras);
	for(int i=0;i<p->qt;i++){
		unidade_liberar(p->unidades[i]);
	}
	free(p->unidades);
	free(p);
}

//funcao que exibe um produto
void produto_exibe(Produto *p){
	printf("\nidentificacao: %s | codigo de barras: %s | preco R$%.2f | quantidade: %d", p->identificacao, p->codigoBarras, p->preco, p->qt);
	for(int i=0;i<p->qt;i++){
		unidade_exibir(p->unidades[i]);
	}
}

//funcao que recebe outro produto e retorna true se tem mesma identificação
bool produto_ehSemelhante(Produto *p1, Produto *p2){
	return (strcmp(p1->identificacao, p2->identificacao)==0)? true:false;
}

//reajuste: recebe um valor percentual(x) e atualiza o preço em x%
void produto_reajuste(Produto *p, float percentual){
	p->preco*=(1+(percentual/100));
}

//funcao de acesso para cada atributo, o qual retorna valores de um produto
//-->acessando a identificacao
void produto_acessaIdentificacao(Produto *p, char *identificacao){
	strcpy(identificacao, p->identificacao);
}
//-->acessando o codigoBarras
void produto_acessaCodigoBarras(Produto *p, char *codigoBarras){
	strcpy(codigoBarras, p->codigoBarras);
}
//-->acessando o preco
void produto_acessaPreco(Produto *p, float *preco){
	*preco=p->preco;
}
//-->acessando a qt
void produto_acessaQt(Produto *p, int *qt){
	*qt=p->qt;
}

//funcao que atribui novos valores para cada item em um produto
//-->novo valor para a identificacao
void produto_atribuiIdentificacao(Produto *p, char *identificacao){
	free(p->identificacao);
    p->identificacao=(char*)malloc((strlen(identificacao)+1)*sizeof(char));
    strcpy(p->identificacao, identificacao);
}
//-->novo valor para o codigoBarras
void produto_atribuiCodigoBarras(Produto *p, char *codigoBarras){
	free(p->codigoBarras);
    p->codigoBarras=(char*)malloc((strlen(codigoBarras)+1)*sizeof(char));
    strcpy(p->codigoBarras, codigoBarras);
}
//-->novo valor para o preco
void produto_atribuiPreco(Produto *p, float preco){
	p->preco=preco;
}
//-->novo valor para a qt
void produto_atribuiQt(Produto *p, int qt){
	p->qt=qt;
}

//funcao que retorna uma string formatada para cada item em um produto
//-->string para a identificacao
char *produto_getIdentificacao(Produto *p){
	int tam=snprintf(NULL, 0, "\nidentificacao: %s", p->identificacao)+1;
	char *str=(char*)malloc(tam*sizeof(char));
	if(str) sprintf(str, "\nidentificacao: %s", p->identificacao);
	return str;
}
//-->string para o codigoBarras
char *produto_getCodigoBarras(Produto *p){
	int tam=snprintf(NULL, 0, "\ncodigo de barras: %s", p->codigoBarras)+1;
	char *str=(char*)malloc(tam*sizeof(char));
	if(str) sprintf(str, "\ncodigo de barras: %s", p->codigoBarras);
	return str;
}
//-->string para o preco
char *produto_getPreco(Produto *p){
	int tam=snprintf(NULL, 0, "\npreco: %.2f", p->preco)+1;
	char *str=(char*)malloc(tam*sizeof(char));
	if(str) sprintf(str, "\npreco: %.2f", p->preco);
	return str;
}
//-->string para a qt
char *produto_getQt(Produto *p){
	int tam=snprintf(NULL, 0, "\nquantidade: %d", p->qt)+1;
	char *str=(char*)malloc(tam*sizeof(char));
	if(str) sprintf(str, "\nquantidade: %d", p->qt);
	return str;
}

//funcao retorna uma string com os valores
char *produto_getProdutos(Produto *p){
	char *identificacao=produto_getIdentificacao(p);
	char *codigoBarras=produto_getCodigoBarras(p);
	char *preco=produto_getPreco(p);
	char *qt=produto_getQt(p);
	int tam=snprintf(NULL, 0, "\nPRODUTO %s %s %s %s", identificacao, codigoBarras, preco, qt)+1;
	char *str=(char*)malloc(tam*sizeof(char));
	if(str) sprintf(str, "\nPRODUTO %s %s %s %s", identificacao, codigoBarras, preco, qt);
	
	free(identificacao);
	free(codigoBarras);
	free(preco);
	free(qt);
	return str;
}

//funcao para saber se dois produtos são iguais: mesmos atributos
int produto_iguais(Produto* p1, Produto* p2) {
    return strcmp(p1->identificacao, p2->identificacao)==0 && strcmp(p1->codigoBarras, p2->codigoBarras)==0 && p1->preco==p2->preco && p1->qt==p2->qt;
}

//para cada produto, quais as unidades vencem em uma determinada data perguntada ao usuario (data alvo)
void produto_vencimento(int dia, int mes, int ano, Produto *p){
	tData *alvo=dta_cria(dia, mes, ano);
	char *dta=dta_getData(alvo);
	char *prod=produto_getIdentificacao(p);
	
	printf("\n\nPRODUTO: %s", prod);
    printf("\nlista de unidade que vencem no dia %s", dta);
    free(dta);
    free(prod);
    
    int Udia, Umes, Uano;
	for(int i=0;i<p->qt;i++){
		unidade_acessaData(p->unidades[i], &Udia, &Umes, &Uano);
		tData *Udata=dta_cria(Udia, Umes, Uano);
		
		if(!data_menorQue(Udata, alvo)){
			unidade_exibir(p->unidades[i]);
			if(unidade_idadeData(p->unidades[i], alvo)>=3){
				produto_reajuste(p, -25);
				printf(" | preco com desconto: R$%.2f", p->preco);
			}
		}
		dta_libera(Udata);
	}
	dta_libera(alvo);
}

