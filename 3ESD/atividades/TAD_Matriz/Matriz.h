#ifndef MATRIZ_H
#define MATRIZ_H

#include <stddef.h> // size_t

/*FORNECIDO PELA PROFESSORA*/
typedef struct matriz Matriz;

// Cria e libera
Matriz* criaMatriz(int linhas, int colunas);
void liberaMatriz(Matriz* m);

// Dimens�es
int linhasMatriz(const Matriz* m);
int colunasMatriz(const Matriz* m);

// Atribui e acessa
void atribuiMatriz(Matriz* m, int linha, int coluna, int valor);

// Vers�o simples: retorna 0 se fora do intervalo
int acessaMatriz(const Matriz* m, int linha, int coluna);

// Vers�o segura: retorna 1 (ok) ou 0 (falha); valor sai em *out
int acessaMatrizSafe(const Matriz* m, int linha, int coluna, int* out);

// Impress�o
void imprimeMatriz(const Matriz* m);

// --------- Opera��es pedidas ---------

// Soma de uma linha espec�fica (0-based). Retorna 1 (ok) ou 0 (falha)
int somaLinhaMatriz(const Matriz* m, int linha, long long* soma_out);

// Soma de uma coluna espec�fica (0-based). Retorna 1 (ok) ou 0 (falha)
int somaColunaMatriz(const Matriz* m, int coluna, long long* soma_out);

// Soma de matrizes (resultado = A + B). Retorna nova matriz ou NULL se dimens�es incompat�veis.
Matriz* somaMatrizes(const Matriz* A, const Matriz* B);

/*FEITO POR MIM*/
// preenche cada acesso aleatoriamente
void preenche_acessos(Matriz *m);

//encontra a maior utilizacao e o dia/hora que ocorreu
int maior_utilizacao(Matriz *m, int *dia, int *hora);

#endif
