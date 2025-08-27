#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct alunos{
	char *nome;
	int matricula, faltas;
	float notas[4];
}Alunos;

void faltosos(Alunos *va, int tam, float mediaf);
void exibirAluno(Alunos *aluno, int i);
Alunos *preencherVet (int tam, float *mediaf);
Alunos preencherAluno(Alunos *aluno, int i);

int main (){
	int tam;
	float mediaf=0;
	printf("insira o tamanho da turma: ");
	scanf("%d", &tam);
	Alunos *va=preencherVet(tam, &mediaf);
	
	faltosos(va, tam, mediaf);
	
	int i;
	for(i=0;i<tam;i++){
		free(va[i].nome);
	}
	free(va);
	return 0;
}

void faltosos(Alunos *va, int tam, float mediaf){
	int i;
	printf("\n\nLISTA DE FALTOSOS (MEDIA DA TURMA = %.2f)", mediaf);
	for(i=0;i<tam;i++){
		if(va[i].faltas>mediaf){
			exibirAluno(&va[i], i+1);
		}
	}
}

void exibirAluno(Alunos *aluno, int i){
	printf("\nALUNO %d", i);
	printf("\n  > nome: %s", aluno->nome);
	printf("\n  > matricula: %d", aluno->matricula);
	printf("\n  > faltas: %d", aluno->faltas);
	printf("\nNOTAS");
	int j;
	for(j=0;j<4;j++){
		printf("\n  > av%d: %.2f", j+1, aluno->notas[j]);
	}
	printf("\n");
}

Alunos *preencherVet (int tam, float *mediaf){
	Alunos *novo=(Alunos*)malloc(tam*sizeof(Alunos));
	int i;
	for(i=0;i<tam;i++){
		preencherAluno(&novo[i],i+1);
		(*mediaf)+=novo[i].faltas;
	}
	*mediaf/=tam;
	
	return novo;
}

Alunos preencherAluno(Alunos *aluno, int i){
	char nm[80];
	printf("\nALUNO %d", i);
	printf("\n  > nome: ");
	getchar();
	fgets(nm, sizeof(nm), stdin);
	nm[strcspn(nm,"\n")]='\0';
	aluno->nome=(char*)malloc((strlen(nm)+1)*sizeof(char));
	strcpy(aluno->nome,nm);
	printf("  > matricula: ");
	scanf("%d", &aluno->matricula);
	printf("  > faltas: ");
	scanf("%d", &aluno->faltas);
	printf("NOTAS\n");
	int j;
	for(j=0;j<4;j++){
		printf("  > av%d: ", j+1);
		scanf("%f", &aluno->notas[j]);
	}
}
