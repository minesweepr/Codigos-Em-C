typedef struct t_cli tCli;
typedef struct t_lista_cliente tListaC;

//FUNCOES PRIMARIAS
tListaC *inic_ord(void);

/*Escreva a fun��o constr�i_lista_clientes( ) que, utilizando as fun��es dos itens 1.c e 1.d,
constr�i uma lista ordenada de clientes, retornando-a. A fun��o deve retornar 1 se realizada
com sucesso e 0 em caso contr�rio.*/
int constroi_lista_clientes(tListaC **p);

/*Escreva a fun��o merge_especial( ) que recebe duas listas do tipo t_lista_cli ordenadas por
identidade e faz um merge especial resultando em duas novas listas ordenadas: na primeira lista
ficam os elementos que s� aparecem em uma das listas originais e na segunda lista ficam
aqueles que aparecem nas duas listas, ou seja, que t�m duas ocorr�ncias. A fun��o deve
retornar as duas listas resultantes. Aten��o: essa fun��o deve ser a mais eficiente poss�vel.*/
void merge_especial(tListaC *l1, tListaC *l2, tListaC **uni, tListaC **dup);

void exibe_lista(tListaC *p);
