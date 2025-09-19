typedef struct tno tNo;
typedef struct tlista tLista;

//FUNCOES PRINCIPAIS
//funcao cria e retorna uma nova lista
tLista *cria_lista();

//inclui um novo numero a lista
int lista_inclui(tLista *l, int num);

//remove um numero da lista
int lista_remove(tLista *l, int num);

//exibe uma lista encadeada circular
void lista_exibe(tLista *l);

//checa se esta vazia ou nao
int lista_estaVazia(tLista *l);

//atribui e retorna o valor desejado da lista
//-->cabeca
void listaAtribui_cabeca(tLista *l, tNo *cabeca);

//acessa e retorna o valor desejado da lista
//-->cabeca
void listaAcessa_cabeca(tLista *l, tNo **cabeca);

//libera tudo de uma lista
void libera_lista(tLista *l);


