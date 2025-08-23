#include<stdio.h>

int main (){
	int i=1, u, result=0;
	
	while(i<=9){
		u=0;
		while(u<=9){
			printf("%d x %d = %d\n", i, u, result=i*u);
			u++;
		}
		i++;
		printf("\n\n");
	}
	
	return 0;
}
