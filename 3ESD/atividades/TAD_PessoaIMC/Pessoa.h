/* cria informacoes pessoa*/
typedef struct pssoa Pessoa;

//soma ou subtrai o peso atual da pessoa
void pessoa_alteraPeso(Pessoa *p, int g);

//soma ou subtrai a altura atual da pessoa
void pessoa_alteraAltura(Pessoa *p, int cm);

//calcula imc da pessoa
char *pessoa_IMC(Pessoa *p);

/* funcoes auxiliares */
/* funcao cria - Aloca e retorna uma pessoa (kg e g) */
Pessoa* pessoa_cria(int kg, int g, int m, int cm, char *nm);

/* funcaolibera - Libera a memoria de uma pessoa previamente criado */
void pessoa_libera(Pessoa* p);

//funcao acessa, retorna o nome de uma pessoa
void pessoa_acessa(Pessoa *p, char *nm);

//funcao atribui, atribui um novo nome para uma pessoa
void pessoa_atribui(Pessoa *p, char *nm);

/* funcaoexibe -Escreve na tela as informacoes da pessoa */
void pessoa_exibe(Pessoa* p);