typedef struct aluno Aluno;

/* função de criação: retorna uma lista vazia */
Aluno *lista_cria(void);

void lista_libera(Aluno *l);

/*recebe o endereço do 1º elemento da lista e os dados de um novo elemento.
Esta função deve criar um novo nó, colocá-lo com o primeiro nó da lista e retornar o endereço do novo nó
para que o ponteiro para o primeiro elemento da lista seja atualizado.*/
Aluno *lista_insere(Aluno *l, int mat, char *nome, float nota, char sexo);

/*recebe uma lista de alunos e retorna o número de alunos nessa
lista.*/
int conta_elementos(Aluno *l);

/*recebe uma lista de alunos e exibe a matrícula, o nome, a
nota e o sexo de todos os alunos na ordem inversa que estão na lista.*/
void exibe_listaRecursiva(Aluno *l);

/*recebe uma lista de alunos e exibe a matrícula, o nome, a nota e o sexo
de todos os alunos.*/
void exibe_listaIterativa(Aluno *l);

//exibe um unico aluno
void exibe_aluno(Aluno *l);

/*recebe uma lista de alunos e um sexo, e retorna o número
de pessoas com esse sexo na lista.*/
int conta_sexo(Aluno *l, char sexo);

/*recebe uma lista de alunos e uma nota, e copia em uma nova lista os
alunos que tem nota >= nota recebida, incluindo nesta nova lista de forma ordenada por mat.*/
Aluno *copia_lista(Aluno *l, float nota);

/*recebe uma lista de alunos, e uma matrícula e retorna o
endereço do nó que contém esta matrícula, se o mesmo existir. ou NULL caso contrário*/
Aluno *busca_aluno_da_lista(Aluno *l, int mat);

/*recebe uma lista de alunos, e remove o primeiro
aluno da lista, se o mesmo existir.*/
Aluno *remove_primeiro_aluno_da_lista(Aluno *l);

/*recebe uma lista de alunos, e remove o segundo
aluno da lista, se o mesmo existir.*/
Aluno *remove_segundo_aluno_da_lista(Aluno *l);

/*recebe uma lista de alunos, e remove o último aluno
da lista, se o mesmo existir.*/
Aluno *remove_ultimo_aluno_da_lista(Aluno *l);

/*recebe uma lista de alunos, e a divide em duas ( na metade). Retorna o
endereço do primeiro nó da segunda metade*/
Aluno *divide_lista(Aluno *l);

//separa uma lista por sexo e retorna o que foi escolhido
Aluno *divide_lista_por_sexo(Aluno *l, char sexo);

/*recebe uma lista de alunos do sexo ‘M’, encontra a maior nota e coloca
todos os alunos com esta maior nota no início da lista. Retorna o endereço do primeiro nó da lista (DESAFIO)*/
Aluno *muda_lista(Aluno *L);

/*DESAFIO1: Escreva a função ordena_lista(), que recebe uma lista de alunos do sexo ‘F’, e ordena-a por mat.
Retorna o endereço do primeiro nó da lista ordenada. NOTA: SUPONTO QUE SEJA CRESCENTE!*/
Aluno *ordena_lista(Aluno *l);

/*DESAFIO2: Escreva a função junta_listas(), que recebe uma lista de alunos do sexo ‘F’ ordenada por mat e a
lista gerada pela copia_lista, criando uma nova lista com a união das dus listas recebidas, mantendo a
ordenação. Retorna o endereço do primeiro nó da lista resultante.*/
Aluno *junta_listas(Aluno *l1, Aluno *l2);
