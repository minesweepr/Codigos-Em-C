#include<stdio.h>
int main ()
{
int A, B, C, i;
A = 0;
B = 10;
C = B - A;
i = 1;
while (i <= 10)
{
if (C > A)
{
C = C - 2;
i++;
}
else
{
i += 2;
B = C % i;
}
A = A + i;
printf ("A = %d\n", A);
printf ("B = %d\n", B);
printf ("C = %d\n", C);
printf ("i = %d\n", i);
}
}
//RESPOSTA: A=2, B=10, C=8, i=2 na primira 
