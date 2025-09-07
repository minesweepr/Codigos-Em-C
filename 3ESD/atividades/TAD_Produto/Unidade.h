#pragma once
#include <time.h>
#include <stdbool.h>
#include "Data.h"

typedef struct unidade Unidade;

//funcao que cria e retorna uma unidade
Unidade *unidade_criar(int lote, int dia, int mes, int ano);

//funcao que libera as memorias alocadas em uma unidade
void unidade_liberar(Unidade *u);

//funcao que exibe uma unidade
void unidade_exibir(Unidade *u);

//funcao de acesso para cada atributo, o qual retorna valores de uma unidade
//-->acessando o lote
void unidade_acessaLote(Unidade *u, int *lote);
//-->acessando a data
void unidade_acessaData(Unidade *u, int *dia, int *mes, int *ano);

//funcao que atribui novos valores para cada item em uma unidade
//-->novo valor para o lote
void unidade_atribuiLote(Unidade *u, int lote);
//-->novo valor para a data
void unidade_atribuiData(Unidade *u, int dia, int mes, int ano);

//funcao que retorna uma string formatada para cada item em uma unidade 
//-->string para o lote
char *unidade_getLote(Unidade *u);
//-->string para a data
char *unidade_getData(Unidade *u);

//funcao que retorna o numero de dias entre a data alvo e a data de fabricacao
int unidade_idadeData(Unidade *u, tData *alvo);

//funcao que retorna true se u1<u2 (fabricado a menos tempo), false caso contrario
bool unidade_menorQue(Unidade *u1, Unidade *u2);

//funcao que retorna uma string com todos os valores de uma unidade
char *unidade_getUnidade(Unidade *u);
