#include <stdio.h>
void prime(int n);

int main()
{
	int n;
	printf("enter a no...");
	scanf("%d",&n);
	prime(n);
	return 0;
}
void prime(int n){
	
	int i,a=1;
	for(i=2;i<n;i++){
		if(n%i==0){
			a=0;
		}
	}if(a==0){
		printf("it is not a prime");
	}else{
		printf("it is a prime");
	}
	
}
