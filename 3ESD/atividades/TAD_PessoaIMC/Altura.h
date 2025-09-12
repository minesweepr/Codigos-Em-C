/* Tipo exportado */
/* cria uma medida de comprimento como em m e cm*/
typedef struct alt Altura;

/* Funções exportadas */
/* Função cria - Aloca e retorna uma altura (m e cm) */
Altura *alt_cria(int m, int cm);

/* Função libera - Libera a memória de uma altura previamente criado */
void alt_libera(Altura *a);

/* Função acessa - Retorna os valores dde uma altura */
void alt_acessa(Altura *a, int *m, int *cm);

/* Função atribui - Atribui novos valores às partes de uma altura */
void alt_atribui(Altura *a, int m, int cm);

/* Função exibe -Escreve na tela oa altura  no formato */
void alt_exibe(Altura *a);

/* Função getAltur- Retorna uma string com os valores dA ALTURA  no formato m,cm*/
char *alt_getAltura(Altura *a);

/*função compara negativo:se o al1 < alt2, 0 se alt1 == alt2, positivo se o alt1 > alt2  */
int alt_compara(Altura *a1, Altura *a2);

/*recebe uma altura e retorna uma nova altura com mesmos valores da recebida*/
Altura *alt_diferenca(Altura *a1, Altura *a2);

/*recebe uma altura e um valor inteiro em centímetros. retorna uma nova altura atualizada*/
Altura *alt_soma(Altura *a, int cm);

/*recebe uma altura e retorna uma nova altura com mesmos valores da recebida*/
Altura *alt_copia (Altura *a);

//aumenta a altura em cm
void alt_alteraAltura(Altura *a, int cm);
