#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//#include "Altura.h"
//#include "Peso.h"
#include "Pessoa.h"
#define TAM 4

int main() {
	Pessoa *pessoas[TAM];
	char nm[100];
	int m, cm, kg, g, resp;
	
	printf("1. PESSOAS");
	for(int i=0;i<TAM;i++){
	    printf("\nPESSOA %d", i+1);
	    printf("\n  > nome: ");
	    getchar();
	    fgets(nm, sizeof(nm), stdin);
	    nm[strcspn(nm, "\n")]='\0';
	    
	    printf("  > altura(m cm): ");
	    scanf("%d %d", &m, &cm);
	    
	    printf("  > peso(kg g): ");
	    scanf("%d %d", &kg, &g);
	    
	    pessoas[i]=pessoa_cria(kg, g, m, cm, nm);
	    char *imc=pessoa_IMC(pessoas[i]);
	    printf("\n  > IMC: %s", imc);
	    free(imc);
	    
	    printf("\n\ndeseja alterar o peso(1=sim, 2=nao)?");
	    scanf("%d", &resp);
	    if(resp==1){
	        int grama_novo;
	        printf("\nem gramas, insira quanto peso vc ganhou(+) ou perdeu(-): ");
	        scanf("%d", &grama_novo);
	        pessoa_alteraPeso(pessoas[i], grama_novo);
	    }
	    
	    printf("\ndeseja alterar a altura(1=sim, 2=nao)?");
	    scanf("%d", &resp);
	    if(resp==1){
	        int cm_novo;
	        printf("\nem cm, insira quanto voce cresceu: ");
	        scanf("%d", &cm_novo);
	        pessoa_alteraAltura(pessoas[i], cm_novo);
	    }
	    
	    printf("\n\n");
	}
	
	printf("2. APTOS PARA O TRABALHO");
	for(int i=0;i<TAM;i++){
	    char *imc=pessoa_IMC(pessoas[i]);
	    if(strcmp(imc, "normal")==0 || strcmp(imc, "sobrepeso")==0){
	        pessoa_exibe(pessoas[i]);
	    }
	    free(imc);
	}
	
	for(int i=0;i<TAM;i++){
	    pessoa_libera(pessoas[i]);
	}
	return 0;
}