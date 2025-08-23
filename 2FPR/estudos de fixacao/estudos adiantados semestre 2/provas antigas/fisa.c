/******************************************************************************

Questão 02 [2,5 pontos]:
Implementar uma função que, dadas duas strings s1 e
s2, crie uma nova string s3 - contendo todos os caracteres de s1 que não estejam em s2.
Nota: em s3, não devem existir caracteres repetidos.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void caracteres (char s1[], char s2[], char s3[]);

int main()
{
    char s1[100], s2[100], s3[100];
    printf("insira duas palavras.\npalavra 1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")]='\0';
    
    printf("\npalavra 2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")]='\0';
    
    caracteres(s1, s2, s3);
    printf("\ns3: %s", s3);

    return 0;
}
/*
exemplo:
s1: campo
s2: menta
caracteres de s1 que não estejam em s2(sem repeticao)
s3: cpo
*/

void caracteres (char s1[], char s2[], char s3[]){
    int i, j, repetido, k=0;
    for(i=0;s1[i]!='\0';i++){
        repetido=1;
        for(j=0;s2[j]!='\0';j++){
            if(s2[j]==s1[i]){
                repetido=0;
                break;
            }
        }
        if(repetido){
            s3[k]=s1[i];
            k++;
        }
    }
    s3[k]='\0';
}
