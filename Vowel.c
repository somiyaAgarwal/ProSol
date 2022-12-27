#include <stdio.h>
int main(){
	char l;
	printf("Enter the alphabet..");
	scanf("%c",&l);
	if(l=='a' ||l=='e' ||l=='i' ||l=='o' ||l=='u'){
		printf("It is a vowel");
	}else{
		printf("It is a consonant");
	}
}
