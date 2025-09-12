/* Tipo exportado */
/* cria uma medida de comprimento como em kg e g*/
typedef struct pessoa Pessoa;

/* Fun��es exportadas */
/* Fun��o cria - Aloca e retorna uma altura (m e cm) */
Pessoa *pessoa_cria(char *nome, int m, int cm, int kg, int g);

/* Fun��o libera - Libera a mem�ria de um peso previamente criado */
void pessoa_libera(Pessoa *p);

/* Fun��o acessa - Retorna os valores dde uma pessoa */
void pessoa_acessaNome(Pessoa *p, char *nome);
void pessoa_acessaAltura(Pessoa *p, int *m, int *cm);
void pessoa_acessaPeso(Pessoa *p, int *kg, int *g);

/* Fun��o atribui - Atribui novos valores �s partes de um peso */
void pessoa_atribuiNome(Pessoa *p, char *nome);
void pessoa_atribuiAlt(Pessoa *p, int m, int cm);
void pessoa_atribuiPeso(Pessoa *p, int kg, int g);

/* Fun��o exibe -Escreve na tela oa altura  no formato */
void pessoa_exibe(Pessoa *p);

/* Fun��o getAltur- Retorna uma string com os valores dA ALTURA  no formato m,cm*/
char *pessoa_getNome(Pessoa *p);
char *pessoa_getAltura(Pessoa *p);
char *pessoa_getPeso(Pessoa *p);

// aumenta ou diminui o peso em g OU altura em cm
void pessoa_alteraPeso(Pessoa *p, int g);
void pessoa_alteraAltura(Pessoa *p, int cm);

//calcula e retorna IMC
float pessoa_IMC(Pessoa *p);

//categoriza IMC ( abaixo do peso, normal, sobrepeso, obesidade)
char *pessoa_categorizaIMC(Pessoa *p);
