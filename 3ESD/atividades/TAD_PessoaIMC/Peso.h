/* Tipo exportado */
/* cria uma medida de peso como em kg e g*/
typedef struct peso Peso;

/* Funções exportadas */
/* Função cria - Aloca e retorna uma peso (kg e g) */
Peso *peso_cria(int kg, int g);

/* Função libera - Libera a memória de um peso previamente criado */
void peso_libera(Peso *p);

/* Função acessa - Retorna os valores dde um peso */
void peso_acessa(Peso *p, int *kg, int *g);

/* Função atribui - Atribui novos valores às partes de um peso */
void peso_atribui(Peso *p, int kg, int g);

/* Função exibe -Escreve na tela oa peso no formato kg,g*/
void peso_exibe(Peso *p);

/* Função getPeso- Retorna uma string com os valores do peso no formato kg,g*/
char *peso_getPeso(Peso *p);

//aumenta ou diminui o peso em g)
void peso_alteraPeso(Peso *p, int g);
