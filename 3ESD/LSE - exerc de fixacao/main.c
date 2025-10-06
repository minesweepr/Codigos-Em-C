#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"
int main(){
	Aluno *l=lista_cria();
	
	l=lista_insere(l, 55, "Caio", 6.3, 'M');
	l=lista_insere(l, 33, "Ana", 1.1, 'F');
	l=lista_insere(l, 44, "Kaike", 6.6, 'M');
	l=lista_insere(l, 22, "Edu", 4.4, 'M');
	l=lista_insere(l, 66, "Bia", 2.2, 'F');
	l=lista_insere(l, 11, "Jane", 5.5, 'F');
	l=lista_insere(l, 77, "Luiz", 6.6, 'M');
	
	
	printf("1. LISTA ORIGINAL:");
    exibe_listaIterativa(l);

    printf("\n\n2. TOTAL DE ALUNOS: %d\n", conta_elementos(l));
    printf("2.1. QUANTIDADE DE HOMENS: %d\n", conta_sexo(l, 'M'));
    printf("2.2. QUANTIDADE DE MULHERES: %d\n", conta_sexo(l, 'F'));

    printf("\n\nLISTA INVERTIDA(RECURSIVA):");
    exibe_listaRecursiva(l);

    printf("\n3. BUSCA MATRICULA(22):");
    Aluno *achou=busca_aluno_da_lista(l, 22);
    if(achou)exibe_aluno(achou);
    else printf("\naluno nao encontrado");

    printf("\n\n4. LISTA SEM O ULTIMO ALUNO:");
    l=remove_ultimo_aluno_da_lista(l);
    exibe_listaIterativa(l);

    printf("\n\n5. COPIA DA LISTA COM ALUNOS DE NOTA >= 4.0:");
    Aluno* copia=copia_lista(l, 4.0);
    exibe_listaIterativa(copia);
    
    /*printf("\n\nLISTA SEM O SEGUNDO ALUNO:");
    l=remove_segundo_aluno_da_lista(l);
    exibe_listaIterativa(l);
    
    printf("\n\nLISTA SEM O PRIMEIRO ALUNO:");
    l=remove_primeiro_aluno_da_lista(l);
    exibe_listaIterativa(l);*/
    
    printf("\n\n6. LISTA SO DE HOMENS, AS MAIORES NOTAS ESTAO NO INICIO:");
    Aluno *lM=divide_lista_por_sexo(l, 'M');
    lM=muda_lista(lM);
    exibe_listaIterativa(lM);
    
    printf("\n\n7. LISTA COM METRICULA ORDENADA SO DE MULHERES:");
    Aluno *lF=divide_lista_por_sexo(l, 'F');
    lF=ordena_lista(lF);
    exibe_listaIterativa(lF);
    
    printf("\n\n8. UNIAO ENTRE LF E COPIA:");
    Aluno *uniao=junta_listas(lF, copia);
    exibe_listaIterativa(lF);
    
    lista_libera(l);
    lista_libera(lM);
    lista_libera(uniao);
    
	return 0;
}
