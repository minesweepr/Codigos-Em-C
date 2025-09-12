/* Tipo exportado */
/* cria uma medida de peso como em kg e g*/
typedef struct peso Peso;

/* Fun��es exportadas */
/* Fun��o cria - Aloca e retorna uma peso (kg e g) */
Peso *peso_cria(int kg, int g);

/* Fun��o libera - Libera a mem�ria de um peso previamente criado */
void peso_libera(Peso *p);

/* Fun��o acessa - Retorna os valores dde um peso */
void peso_acessa(Peso *p, int *kg, int *g);

/* Fun��o atribui - Atribui novos valores �s partes de um peso */
void peso_atribui(Peso *p, int kg, int g);

/* Fun��o exibe -Escreve na tela oa peso no formato kg,g*/
void peso_exibe(Peso *p);

/* Fun��o getPeso- Retorna uma string com os valores do peso no formato kg,g*/
char *peso_getPeso(Peso *p);

//aumenta ou diminui o peso em g)
void peso_alteraPeso(Peso *p, int g);
