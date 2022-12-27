//String length using pointers
#include <stdio.h>
int main(){
	int a;
	char s[20];
	printf("Enter any string..");
	scanf("%s",&s);
	a = len(s);
	printf("%d",a);
}
int len(char *p){
	int i=0;
	while(*p!='\0'){
		p++;
		i++;
	}
	return(i);
}
