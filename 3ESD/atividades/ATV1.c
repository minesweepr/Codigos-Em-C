#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct atleta{
	char *nome;
	int matricula, tempoTreino;
}Atleta;

void filtrartemp(int tam, Atleta vet[]);
void exibirO_ranking (int tam, Atleta vet[]);
void exibirO_nome(int tam, Atleta vet[]);
void exibirO_inclusao(int tam, Atleta vet[]);
void exibir (Atleta *a);
Atleta *incluirAtletas (int *tam, Atleta vet[]);
void menu ();

int main (){
	Atleta *vAtletas=NULL;
	int resp, tamvA=0, i;

	do{
		menu();
		scanf("%d", &resp);
		printf("----------------------------------------------------------------\n");
		
		switch(resp){
			case 1:
				vAtletas=incluirAtletas(&tamvA, vAtletas);
				break;
			case 2:
				exibirO_inclusao(tamvA, vAtletas);
				break;
			case 3:
				exibirO_nome(tamvA, vAtletas);
				break;
			case 4:
				exibirO_ranking(tamvA, vAtletas);
				break;
			case 5:
				filtrartemp(tamvA, vAtletas);
				break;
			case 0:
				printf("Finalizando o programa...");
				break;
			default:
				printf("opcao invalida.");
		}
		
		system("pause");
		system("cls");
	}while(resp!=0);
	
	for(i=0;i<tamvA;i++){
		free(vAtletas[i].nome);
	}
	free(vAtletas);
	return 0;
}

void filtrartemp(int tam, Atleta vet[]){
	int limite, tam_vPiores=0, i;
	printf("insira o limite: ");
	scanf("%d", &limite);
	
	Atleta **vPiores=NULL;
	for(i=0;i<tam;i++){
		if(vet[i].tempoTreino>limite){
			tam_vPiores++;
			vPiores=(Atleta**)realloc(vPiores,tam_vPiores *sizeof(Atleta*));
			vPiores[tam_vPiores-1]=&vet[i];
		}
	}
	if(tam_vPiores==0){
		printf("\nNAO HA ATLETAS COM TEMPO ACIMA DE %d MINUTOS.\n" , limite);
	} else{
		for(i=0;i<tam_vPiores;i++){
			exibir(vPiores[i]);
		}
		free(vPiores);
	}
}

void exibirO_ranking (int tam, Atleta vet[]){
	Atleta **vRanking=(Atleta**)malloc(tam*sizeof(Atleta*));
	int i, j, cont=1;
	vRanking[0]=&vet[0];
	
	for(i=1;i<tam;i++){
		Atleta *chave=&vet[i];
		j=cont-1;
		while(j>=0 && (vRanking[j]->tempoTreino<chave->tempoTreino || (vRanking[j]->tempoTreino==chave->tempoTreino && vRanking[j]->matricula<chave->matricula))){
			vRanking[j+1]=vRanking[j];
			j--;
		}
		vRanking[j+1]=chave;
		cont++;
	}
	printf("LISTA DE ATLETAS ORDENADOS POR RANKING:");
	for(i=0;i<tam;i++){
		exibir(vRanking[i]);
	}
	
	free(vRanking);
}

void exibirO_nome(int tam, Atleta vet[]){
	Atleta **vOrdenado=(Atleta**)malloc(tam*sizeof(Atleta*));
	int i, j, cont=1;
	vOrdenado[0]=&vet[0];

	for(i=1;i<tam;i++){
		Atleta *chave=&vet[i];
		j=cont-1;
		while(j>=0 && (strcmp(vOrdenado[j]->nome, chave->nome)>0 || (strcmp(vOrdenado[j]->nome, chave->nome)==0)&& vOrdenado[j]->matricula>chave->matricula)){
			vOrdenado[j+1]=vOrdenado[j];
			j--;
		}
		vOrdenado[j+1]=chave;
		cont++;
	}
	
	printf("LISTA DE ATLETAS ORDENADOS ALFABETICAMENTE:");
	for(i=0;i<tam;i++){
		exibir(vOrdenado[i]);
	}
	
	free(vOrdenado);
}

void exibirO_inclusao(int tam, Atleta vet[]){
	int i;
	printf("LISTA DE ATLETAS ORDENADOS POR INCLUSAO:");
	for(i=0;i<tam;i++){
		exibir(&vet[i]);
	}
}

void exibir (Atleta *a){
	printf("\nNOME: %s", a->nome);
	printf("\n  > matricula: %d", a->matricula);
	printf("\n  > tempo: %02d:%02d\n", a->tempoTreino/60, a->tempoTreino%60);
}

Atleta *incluirAtletas (int *tam, Atleta vet[]){
	int i, quant;
	char nome[100];
	printf("insira a quantidade de atletas que deseja cadastrar: ");
	scanf("%d", &quant);
	
	Atleta *novo=(Atleta*)realloc(vet,(*tam+quant)*sizeof(Atleta));
	for(i=*tam;i<(*tam + quant);i++){
		printf("\nATLETA %d", i+1);
		printf("\n  > nome: ");
		getchar();
		fgets(nome, sizeof(nome), stdin);
		nome[strcspn(nome, "\n")]='\0';
		novo[i].nome=(char*)malloc((strlen(nome)+1)*sizeof(char));
		strcpy(novo[i].nome, nome);
		
		printf("  > matricula: ");
		scanf("%d", &novo[i].matricula);
		printf("  > tempo de treino: ");
		scanf("%d", &novo[i].tempoTreino);
	}
	*tam+=quant;
	return novo;
}

void menu (){
	printf("SISTEMA DE GERENCIAMENTO DE ATLETAS");
	printf("\n  1. incluir atletas;");
	printf("\n  2. exibir por ordem de inclusao;");
	printf("\n  3. exibir por ordem alfabetica;");
	printf("\n  4. exibir ranking por tempo de treino, do maior para o menor;");
	printf("\n  5. filtrar atletas com tempo superior a um limite;");
	printf("\n  0. finalizar programa.");
	printf("\n\nselecione como prosseguir: ");
}
