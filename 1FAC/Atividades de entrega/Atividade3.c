#include<stdio.h>

int main (){
	int n, i, o;
	
	printf("insira um numero: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%2!=0){
			for(o=1;o<=i;o++){
				printf("%d ", o);
			}
		}
		else{
			for(o=i;o>=1;o--){
				printf("%d ", o);
			}
		}
		printf("\n");
	}
	
	return 0;
}
