#include "Unidade.h"

struct unidade{
	int lote;
	tData *dataFab;
};

//funcao que cria e retorna uma unidade
Unidade *unidade_criar(int lote, int dia, int mes, int ano){
	Unidade *u=(Unidade*)malloc(sizeof(Unidade));
	if(u==NULL){
		printf("\nmemoria insuficiente.");
		exit(1);
	}
	u->lote=lote;
	u->dataFab=dta_cria(dia, mes, ano);
	
	return u;
}

//funcao que libera as memorias alocadas em uma unidade
void unidade_liberar(Unidade *u){
	dta_libera(u->dataFab);
	free(u);
}

//funcao que exibe uma unidade
void unidade_exibir(Unidade *u){
	char *data=dta_getData(u->dataFab);
	printf("\nlote: %d | data de fabricacao: %s", u->lote, data);
	free(data);
}

//funcao de acesso para cada atributo, o qual retorna valores de uma unidade
//-->acessando o lote
void unidade_acessaLote(Unidade *u, int *lote){
	*lote=u->lote;
}
//-->acessando a data
void unidade_acessaData(Unidade *u, int *dia, int *mes, int *ano){
	dta_acessa(u->dataFab, dia, mes, ano);
}

//funcao que atribui novos valores para cada item em uma unidade
//-->novo valor para o lote
void unidade_atribuiLote(Unidade *u, int lote){
	u->lote=lote;
}
//-->novo valor para a data
void unidade_atribuiData(Unidade *u, int dia, int mes, int ano){
	dta_atribui(u->dataFab, dia, mes, ano);
}

//funcao que retorna uma string formatada para cada item em uma unidade 
//-->string para o lote
char *unidade_getLote(Unidade *u){
	int tam=snprintf(NULL, 0, "\nlote: %d", u->lote)+1; //https://www.geeksforgeeks.org/c/snprintf-c-library/
	/*snprintf calcula exatamente quanto espaco na memoria sera necessario para sua formatacao especifica. o "NULL" e o "0" meio q garantem q
	sempre retorne o comprimento exato que a string teria, independente do valor. +1 e para o \0 da string*/
	char *str=(char*)malloc(tam*sizeof(char));
	if(str)sprintf(str,"\nlote: %d", u->lote);
	return str;
}
//-->string para a data
char *unidade_getData(Unidade *u){
	return dta_getData(u->dataFab);
}

//funcao que retorna o numero de dias entre a data alvo e a data de fabricacao
int unidade_idadeData(Unidade *u, tData *alvo){
	return dta_diferenca(u->dataFab, alvo);
}

//funcao que retorna true se u1<u2 (fabricado a menos tempo), false caso contrario
bool unidade_menorQue(Unidade *u1, Unidade *u2){
	time_t now=time(NULL);
  	struct tm *t=localtime(&now);
  	tData *atual=dta_cria(t->tm_mday, t->tm_mon+1, t->tm_year+1900);
  	
	int dif1=dta_diferenca(u1->dataFab, atual);
	int dif2=dta_diferenca(u2->dataFab, atual);
	
	if(dif1==dif2) return u1->lote<u2->lote?true:false;
	return dif1<dif2?true:false;
}

//funcao que retorna uma string com todos os valores de uma unidade
char *unidade_getUnidade(Unidade *u){
	char *data=unidade_getData(u);
	char *lote=unidade_getLote(u);
	int tam=snprintf(NULL, 0, "\nUNIDADE %s %s", data, lote)+1;
	char *str=(char*)malloc(tam*sizeof(char));
	if(str) sprintf(str, "\nUNIDADE %s %s", data, lote);
	
	free(data);
	free(lote);
	return str;
}
