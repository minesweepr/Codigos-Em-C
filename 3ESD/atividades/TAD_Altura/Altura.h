/* TADS FONECIDOS PELA PROFESSORA */
/* cria uma medida de comprimento como em m e cm*/
typedef struct alt Altura;

/* Fun��es exportadas */
/* Fun��o cria - Aloca e retorna uma altura (m e cm) */
Altura* alt_cria(int m, int cm);

/* Fun��o libera - Libera a mem�ria de uma altura previamente criado */
void alt_libera(Altura* p);

/* Fun��o acessa - Retorna os valores dde uma altura */
void alt_acessa(Altura* p, int* m, int* cm);

/* Fun��o atribui - Atribui novos valores �s partes de uma altura */
void alt_atribui(Altura* p, int m, int cm);

/* Fun��o exibe -Escreve na tela oa altura  no formato  */
void alt_exibe(Altura* p);

/* Fun��o getAltur- Retorna uma string com os valores dA ALTURA  no formato m,cm*/
char* alt_getAltura(Altura* p);

/*fun��o compara negativo:se o al1 < alt2, 0 se alt1 == alt2, positivo se o alt1 > alt2  */
int alt_compara(Altura *p1, Altura *p2);

/*CRIADOS POR MIM*/
/*soma altura*/
Altura *alt_soma(Altura *p1, int cm);

/*copia altura*/
Altura *alt_copia(Altura *p);
