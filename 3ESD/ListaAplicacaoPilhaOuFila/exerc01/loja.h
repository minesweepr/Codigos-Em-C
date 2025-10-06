typedef struct t_cli tCli;
typedef struct t_lista_cliente tListaC;

//FUNCOES PRIMARIAS
tListaC *inic_ord(void);

/*Escreva a função constrói_lista_clientes( ) que, utilizando as funções dos itens 1.c e 1.d,
constrói uma lista ordenada de clientes, retornando-a. A função deve retornar 1 se realizada
com sucesso e 0 em caso contrário.*/
int constroi_lista_clientes(tListaC **p);

/*Escreva a função merge_especial( ) que recebe duas listas do tipo t_lista_cli ordenadas por
identidade e faz um merge especial resultando em duas novas listas ordenadas: na primeira lista
ficam os elementos que só aparecem em uma das listas originais e na segunda lista ficam
aqueles que aparecem nas duas listas, ou seja, que têm duas ocorrências. A função deve
retornar as duas listas resultantes. Atenção: essa função deve ser a mais eficiente possível.*/
void merge_especial(tListaC *l1, tListaC *l2, tListaC **uni, tListaC **dup);

void exibe_lista(tListaC *p);
