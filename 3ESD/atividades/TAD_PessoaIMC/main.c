#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pessoa.h"
#define TAM 4
int main()
{
    Pessoa *vet[TAM];
    //*pessoa_cria(char *nome, int m, int cm, int kg, int g)
    vet[0]=pessoa_cria("vinicius", 1, 70, 70, 0);
    vet[1]=pessoa_cria("gabriel", 1, 70, 80, 0);
    vet[2]=pessoa_cria("maria", 1, 70, 50, 0);
    vet[3]=pessoa_cria("joao", 1, 75, 130, 0);
    
    printf("pessoas aptas para um determinado emprego(apenas normais  ou sobrepeso são aceitos)");
    for(int i=0;i<TAM;i++){
        char *categoria_imc=pessoa_categorizaIMC(vet[i]);
        if(strcmp(categoria_imc, "normal")==0 || strcmp(categoria_imc, "sobrepeso")==0){
            pessoa_exibe(vet[i]);
            printf("\nimc: %.2f, %s\n", pessoa_IMC(vet[i]), categoria_imc);
            free(categoria_imc);
        }
    }
    
    
    for(int i=0;i<TAM;i++){
        pessoa_libera(vet[i]);
    }
    return 0;
}
