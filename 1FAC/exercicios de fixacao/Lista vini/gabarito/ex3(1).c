#include <stdio.h>

void var(int A, int B, int C){
	if (B>C && C>A){
		printf("A=%d, B=%d, C=%d", B, C, A);
	}
	if (B>A && A>C){
		printf("A=%d, B=%d, C=%d", B, A, C);
	}
	if (A>B && B>C){
		printf("A=%d, B=%d, C=%d", A, B, C);
	}
	if (A>C && C>B){
		printf("A=%d, B=%d, C=%d", A, C, B);
	}
	if (C>A && A>B){
		printf("A=%d, B=%d, C=%d", C, A, B);
	}
	if (C>B && B>A){
		printf("A=%d, B=%d, C=%d", C, B, A);
	}
}

int main(){
	int A, B, C;
	printf("Insira tres valores numericos A, B e C.");
	scanf("%d %d %d", &A, &B, &C);
	var(A, B, C);
	
}