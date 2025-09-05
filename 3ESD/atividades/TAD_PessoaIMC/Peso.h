/* cria uma medida de comprimento como em m e cm*/
typedef struct pes Peso;

/* funcoes auxiliares */
int converteParag(Peso * p);

/* funcao cria - Aloca e retorna um Peso (kg e g) */
Peso* peso_cria(int kg, int g);

/* funcaolibera - Libera a memoria de um Peso previamente criado */
void peso_libera(Peso* p);

/* funcao acessa - Retorna os valores de um Peso */
void peso_acessa(Peso* p, int* kg, int* g);

/* funcao atribui - Atribui novos valores as partes de uma Peso */
void peso_atribui(Peso* p, int kg, int g);

/* funcaoexibe -Escreve na tela o Peso no formato  kg,g */
void peso_exibe(Peso* p);

/* Fun��o getAltur- Retorna ukga string cokg os valores dA Peso  no formato kg,g*/
char* peso_getPeso(Peso* p);

/*fun��o compara negativo:se o al1 < alt2, 0 se alt1 == alt2, positivo se o alt1 > alt2  */
int peso_compara(Peso *p1, Peso *p2);

//soma Peso
Peso *peso_soma(Peso *p1, int n);
