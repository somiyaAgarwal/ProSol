//find the length of a string
#include <stdio.h>
int main(){
	int a;
	char s[20];
	printf("Enter any string..");
	scanf("%s",&s);
	a = len(s);
	printf("%d",a);
}
int len(char s[]){
	int i=0;
	while(s[i]!='\0'){
		i++;
	}
	return(i);
}
