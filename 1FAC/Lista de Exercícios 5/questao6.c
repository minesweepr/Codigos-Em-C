/*Criar um programa que exiba os N 
primeiros termos da seguinte s?rie: 
1,2,8,64,1024,...
1*2 2*4 4*8 8*16*/ 
#include<stdio.h> 
#include<math.h> 
 
int main () { 
 int i, n, t=1, j=1; 
  
 printf("insira o numero de termos: "); 
 scanf("%d",&n); 
  
 printf("os %d primeiros termos da serie: ", n); 
 for(i=1;i<=n;i++){ 
   
  printf("%d ", t); 
  t=j*(2*t);
  j*=2; 
   
 } 
  
 return 0; 
}
