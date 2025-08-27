#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10

struct avaliacao{ 
    float valorVendidoNoMes;
    int numeroDeFaltas;
};
typedef struct avaliacao Avaliacao;

struct vendedor{ 
    int inscricao;
    char nome[51];
    float salario_base;
    Avaliacao aval;
};
typedef struct vendedor Vendedor;

struct vendedordemitido{
    int inscricao;
    Avaliacao aval;
};
typedef struct vendedordemitido VendedorDemitido;

float calculaExtra (Avaliacao *aval);
float calculaValorTotalDaFolha (int n, Vendedor vVend[]);
VendedorDemitido *obtemRelacaoDemitidos (int n, Vendedor vVend[], int *nDemitidos);
char *obtemMelhorVendedor(int n, Vendedor vVend[]);
void exibirVendedor (Vendedor *vend);
void exibirDemitido (VendedorDemitido *demi);

int main (void){
    int i;
    Vendedor vVendedor[N]= {{1, "Ana Silva", 1000,{3000,1}},
        {2, "Pedro Duarte",2000,{3010,3}},
        {3, "Joao Filho", 1000,{3020,4}},
        {4, "Maria Gomes", 3000,{3030,15}},
        {5, "Silvio Lins", 1000,{6000,15}},
        {6, "Marcia Morais",2000,{6010,3}},
        {7, "Bruno Rodrigues",3000,{6020,4}},
        {8, "Thais Silva", 4000,{6030,7}},
        {9, "Ricardo Costa", 5000,{3040,7}},
        {10, "Julia Neves", 10000,{1000,0}}};
        
    printf("TODOS OS VENDEDORES");
    for(i=0;i<N;i++){
        exibirVendedor(&vVendedor[i]);
    }
    
    printf("\n\nVALOR TOTAL DA FOLHA: R$%.2f\n\n", calculaValorTotalDaFolha(N, vVendedor));
    
    int nDemitidos=0;
    VendedorDemitido *vDemitido=obtemRelacaoDemitidos(N, vVendedor, &nDemitidos);
    if(vDemitido==NULL){
        printf("NINGUEM FOI DEMITIDO.\n\n");
    }else{
        printf("%d VENDEDORES FORAM DEMITIDOS -- lista de vendedores demitidos", nDemitidos);
        for(i=0;i<nDemitidos;i++){
            exibirDemitido(&vDemitido[i]);
        }
        free(vDemitido);
    }
    
    printf("\n\nPARABENS, %s, VOCE E O VENDEDOR DO MES!", obtemMelhorVendedor(N, vVendedor));
    
    return 0;
}

float calculaExtra (Avaliacao *aval){
	if(aval->numeroDeFaltas<2 && aval->valorVendidoNoMes>2000){
		return 180;
	} else if (aval->numeroDeFaltas<4 && aval->valorVendidoNoMes>2000){
		return 150;
	} else if (aval->numeroDeFaltas<6  && aval->valorVendidoNoMes>5000) {
		return 120;
	} else{
		return 0;
	}
}

float calculaValorTotalDaFolha (int n, Vendedor vVend[]){
    int i;
    float total=0;
    for(i=0;i<n;i++){
        total+=vVend[i].salario_base+calculaExtra(&vVend[i].aval);
    }
    return total;
}

VendedorDemitido *obtemRelacaoDemitidos (int n, Vendedor vVend[], int *nDemitidos){
    int i;
    for(i=0;i<n;i++){
        if(vVend[i].aval.numeroDeFaltas>=10){
            (*nDemitidos)++;
        }
    }
    if(*nDemitidos==0){
        return NULL;
    } else{
        VendedorDemitido *novo=(VendedorDemitido*)malloc((*nDemitidos)* sizeof(VendedorDemitido));
        int j=0;
        for(i=0;i<n;i++){
            if(vVend[i].aval.numeroDeFaltas>=10){
                novo[j].inscricao=vVend[i].inscricao;
                novo[j].aval=vVend[i].aval;
                j++;
            }
        }
        return novo;
    }
}

char *obtemMelhorVendedor(int n, Vendedor vVend[]){
    int i, melhor=0;
    for(i=1;i<n;i++){
        if(vVend[i].aval.valorVendidoNoMes>vVend[melhor].aval.valorVendidoNoMes){
            melhor=i;
        }
    }
    
    return vVend[melhor].nome;
}

void exibirVendedor (Vendedor *vend){
    printf("\n%d | %s | R$%.2f | R$%.2f | %d", vend->inscricao, vend->nome, vend->salario_base, vend->aval.valorVendidoNoMes, vend->aval.numeroDeFaltas);
}

void exibirDemitido (VendedorDemitido *demi){
    printf("\n%d | R$%.2f | %d", demi->inscricao, demi->aval.valorVendidoNoMes, demi->aval.numeroDeFaltas);
}
