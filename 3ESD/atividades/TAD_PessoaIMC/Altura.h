/* Tipo exportado */
/* cria uma medida de comprimento como em m e cm*/
typedef struct alt Altura;

/* Fun��es exportadas */
/* Fun��o cria - Aloca e retorna uma altura (m e cm) */
Altura *alt_cria(int m, int cm);

/* Fun��o libera - Libera a mem�ria de uma altura previamente criado */
void alt_libera(Altura *a);

/* Fun��o acessa - Retorna os valores dde uma altura */
void alt_acessa(Altura *a, int *m, int *cm);

/* Fun��o atribui - Atribui novos valores �s partes de uma altura */
void alt_atribui(Altura *a, int m, int cm);

/* Fun��o exibe -Escreve na tela oa altura  no formato */
void alt_exibe(Altura *a);

/* Fun��o getAltur- Retorna uma string com os valores dA ALTURA  no formato m,cm*/
char *alt_getAltura(Altura *a);

/*fun��o compara negativo:se o al1 < alt2, 0 se alt1 == alt2, positivo se o alt1 > alt2  */
int alt_compara(Altura *a1, Altura *a2);

/*recebe uma altura e retorna uma nova altura com mesmos valores da recebida*/
Altura *alt_diferenca(Altura *a1, Altura *a2);

/*recebe uma altura e um valor inteiro em cent�metros. retorna uma nova altura atualizada*/
Altura *alt_soma(Altura *a, int cm);

/*recebe uma altura e retorna uma nova altura com mesmos valores da recebida*/
Altura *alt_copia (Altura *a);

//aumenta a altura em cm
void alt_alteraAltura(Altura *a, int cm);
