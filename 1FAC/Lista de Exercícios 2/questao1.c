#include<stdio.h>
#include<math.h>


int main () {
    float p, h, imc;
    
    printf("Qual seu peso, em kg?");
    scanf("%f",&p);
    printf("Qual sua altura, em metros?");
    scanf("%f",&h);
    
    if (p <= 0 || h <=0) {
          printf("Numero invalido, tente novamente");
          return 0;
          }
    
    imc=p/pow(h,2);

    
    if (imc < 18.5) {
            printf("Abaixo do peso");
            }
    else if (imc < 25.0) {
            printf("Peso ideal");
            }   
    else if (imc < 30.0) {
            printf("Sobrepeso");
            }  
    else if (imc < 30.5) {
            printf("Obesidade grau I");
            } 
    else if (imc < 40) {
            printf("Obesidade grau II");
            }  
    else    {
            printf("Obesidade grau III");
            }                                        
    
    return 0;
}
