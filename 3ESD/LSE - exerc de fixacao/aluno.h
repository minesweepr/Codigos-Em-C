typedef struct aluno Aluno;

/* fun��o de cria��o: retorna uma lista vazia */
Aluno *lista_cria(void);

void lista_libera(Aluno *l);

/*recebe o endere�o do 1� elemento da lista e os dados de um novo elemento.
Esta fun��o deve criar um novo n�, coloc�-lo com o primeiro n� da lista e retornar o endere�o do novo n�
para que o ponteiro para o primeiro elemento da lista seja atualizado.*/
Aluno *lista_insere(Aluno *l, int mat, char *nome, float nota, char sexo);

/*recebe uma lista de alunos e retorna o n�mero de alunos nessa
lista.*/
int conta_elementos(Aluno *l);

/*recebe uma lista de alunos e exibe a matr�cula, o nome, a
nota e o sexo de todos os alunos na ordem inversa que est�o na lista.*/
void exibe_listaRecursiva(Aluno *l);

/*recebe uma lista de alunos e exibe a matr�cula, o nome, a nota e o sexo
de todos os alunos.*/
void exibe_listaIterativa(Aluno *l);

//exibe um unico aluno
void exibe_aluno(Aluno *l);

/*recebe uma lista de alunos e um sexo, e retorna o n�mero
de pessoas com esse sexo na lista.*/
int conta_sexo(Aluno *l, char sexo);

/*recebe uma lista de alunos e uma nota, e copia em uma nova lista os
alunos que tem nota >= nota recebida, incluindo nesta nova lista de forma ordenada por mat.*/
Aluno *copia_lista(Aluno *l, float nota);

/*recebe uma lista de alunos, e uma matr�cula e retorna o
endere�o do n� que cont�m esta matr�cula, se o mesmo existir. ou NULL caso contr�rio*/
Aluno *busca_aluno_da_lista(Aluno *l, int mat);

/*recebe uma lista de alunos, e remove o primeiro
aluno da lista, se o mesmo existir.*/
Aluno *remove_primeiro_aluno_da_lista(Aluno *l);

/*recebe uma lista de alunos, e remove o segundo
aluno da lista, se o mesmo existir.*/
Aluno *remove_segundo_aluno_da_lista(Aluno *l);

/*recebe uma lista de alunos, e remove o �ltimo aluno
da lista, se o mesmo existir.*/
Aluno *remove_ultimo_aluno_da_lista(Aluno *l);

/*recebe uma lista de alunos, e a divide em duas ( na metade). Retorna o
endere�o do primeiro n� da segunda metade*/
Aluno *divide_lista(Aluno *l);

//separa uma lista por sexo e retorna o que foi escolhido
Aluno *divide_lista_por_sexo(Aluno *l, char sexo);

/*recebe uma lista de alunos do sexo �M�, encontra a maior nota e coloca
todos os alunos com esta maior nota no in�cio da lista. Retorna o endere�o do primeiro n� da lista (DESAFIO)*/
Aluno *muda_lista(Aluno *L);

/*DESAFIO1: Escreva a fun��o ordena_lista(), que recebe uma lista de alunos do sexo �F�, e ordena-a por mat.
Retorna o endere�o do primeiro n� da lista ordenada. NOTA: SUPONTO QUE SEJA CRESCENTE!*/
Aluno *ordena_lista(Aluno *l);

/*DESAFIO2: Escreva a fun��o junta_listas(), que recebe uma lista de alunos do sexo �F� ordenada por mat e a
lista gerada pela copia_lista, criando uma nova lista com a uni�o das dus listas recebidas, mantendo a
ordena��o. Retorna o endere�o do primeiro n� da lista resultante.*/
Aluno *junta_listas(Aluno *l1, Aluno *l2);
