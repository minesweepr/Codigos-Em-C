#include<stdio.h>

int main () {
	int a, b, c, i;
	
	printf("Que tipo de ordem voce prefere? (1 = crescente, 2 = decrescente, 3 = maior no meio):");
	scanf("%d",&i);
	printf("Escolha tres numeros:");
	scanf("%d %d %d",&a,&b,&c);
	
	if ( i < 0 || i > 3){
		printf("Numero invalido, tente novamente");
		return 0;
	}
	
	if (i==1){
		if (a<b && a<c) {
            if (b<c) {
                printf("%d %d %d",a,b,c);}
			else {
                printf("%d %d %d",a,c,b);}      
     	}
     	else if (b<c && b<a){
     	    if (c<a) {
                printf("%d %d %d",b,c,a);}	
            else {
			    printf("%d %d %d",b,a,c);}    
		}
		else if (c<b && c<a) {
			if (b<a) {
				printf("%d %d %d",c,b,a);}
			else {
				printf("%d %d %d",c,a,b);}	
		}
     	
            }
	
	if (i==2){
		if (a>b && a>c) {
            if (b>c) {
                printf("%d %d %d",a,b,c);}
			else {
                printf("%d %d %d",a,c,b);}      
     	}
     	else if (b>c && b>a){
     	    if (c>a) {
                printf("%d %d %d",b,c,a);}	
            else {
			    printf("%d %d %d",b,a,c);}    
		}
		else if (c>b && c>a) {
			if (b>a) {
				printf("%d %d %d",c,b,a);}
			else {
				printf("%d %d %d",c,a,b);}	
		}
     	
            }
	
	if (i==3){
		if (a>b && a>c){
			if (b>c){
			printf("%d %d %d",b,a,c);}
			else {
			printf("%d %d %d",c,a,b);}
		}
		else if (b>c && b>a){
			if (c>a){
			printf("%d %d %d",c,b,a);}
			else {
			printf("%d %d %d",a,b,c);}
		}
		else if (c>a && c>b){
			if (a>b){
			printf("%d %d %d",a,c,b);}
			else{
			printf("%d %d %d",b,c,a);}
		}
	}
	


	return 0;
}
