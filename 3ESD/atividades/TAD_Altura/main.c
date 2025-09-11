#include <stdio.h>
#include <stdlib.h>
#include "Altura.h"

int main()
{
    Altura *a1=alt_cria(1, 70), *a2=alt_cria(1, 80);
    
    Altura *dif=alt_diferenca(a1, a2);
    char *dif_str=alt_getAltura(dif);
    printf("diferenca: %s", dif_str);
    free(dif_str);
    
    Altura *soma=alt_soma(a1, 50);
    char *soma_str=alt_getAltura(soma);
    printf("\n\nsoma: %s", soma_str);
    free(soma_str);
    
    Altura *copia=alt_copia(a1);
    char *copia_str=alt_getAltura(copia);
    printf("\n\ncopia: %s", copia_str);
    free(copia_str);
    
    alt_libera(a1);
    alt_libera(a2);
    alt_libera(soma);
    alt_libera(copia);
    return 0;
}
