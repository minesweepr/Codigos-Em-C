#pragma once
#include "Data.h"
#include "Unidade.h"

typedef struct produto Produto;

//funcao que cria e retorna um produto
Produto *produto_cria(char *identificacao, char *codigoBarras, float preco, int qt);

//funcao cria uma unidade
void produto_criaUnidade(Produto *p, int lote, int dia, int mes, int ano, int i);

//funcao que libera as memorias alocadas em um produto
void produto_libera(Produto *p);

//funcao que exibe um produto
void produto_exibe(Produto *p);

//funcao que recebe outro produto e retorna true se tem mesma identificação
bool produto_ehSemelhante(Produto *p1, Produto *p2);

//reajuste: recebe um valor percentual(x) e atualiza o preço em x%
void produto_reajuste(Produto *p, float percentual);

//funcao de acesso para cada atributo, o qual retorna valores de um produto
//-->acessando a identificacao
void produto_acessaIdentificacao(Produto *p, char *identificacao);
//-->acessando o codigoBarras
void produto_acessaCodigoBarras(Produto *p, char *codigoBarras);
//-->acessando o preco
void produto_acessaPreco(Produto *p, float *preco);
//-->acessando a qt
void produto_acessaQt(Produto *p, int *qt);

//funcao que atribui novos valores para cada item em um produto
//-->novo valor para a identificacao
void produto_atribuiIdentificacao(Produto *p, char identificacao);
//-->novo valor para o codigoBarras
void produto_atribuiCodigoBarras(Produto *p, char codigoBarras);
//-->novo valor para o preco
void produto_atribuiPreco(Produto *p, float preco);
//-->novo valor para a qt
void produto_atribuiQt(Produto *p, int qt);

//funcao que retorna uma string formatada para cada item em um produto
//-->string para a identificacao
char *produto_getIdentificacao(Produto *p);
//-->string para o codigoBarras
char *produto_getCodigoBarras(Produto *p);
//-->string para o preco
char *produto_getPreco(Produto *p);
//-->string para a qt
char *produto_getQt(Produto *p);

//funcao retorna uma string com os valores
char *produto_getProdutos(Produto *p);

//funcao para saber se dois produtos são iguais: mesmos atributos
int produto_iguais(Produto* p1, Produto* p2);

//para cada produto, quais as unidades vencem em uma determinada data perguntada ao usuario (data alvo)
void produto_vencimento(int dia, int mes, int ano, Produto *p);
