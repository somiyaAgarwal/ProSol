//reverse the string
#include <stdio.h>
int main(){
    char str[10];
    int l,a;
    printf("enter the string...");
    scanf("%s",str);
    a = pal(str);
    if(a==1){
    	printf("pal");
	}else{
		printf("not");
	}
}

int pal(char*p){
	char *q;
	q =p;
	while(*q!='\0'){
		q++;
	}q--;
	while(*p==*q && p<q){
		p++;
		q--;
	}
	if(p>=q){
		return(1);
	}else{
		return(0);
	}
}

