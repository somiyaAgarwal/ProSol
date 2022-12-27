//perfect number using recursion
#include <stdio.h>
int main(){
	int n,a,s;
	scanf("%d",&n);
	a = n-1;
	s=0;
	per(n,a,s);
	
}
int per(int n,int i,int s){
	if(i==(n/2)+1){
		if(s==n){
			printf("perfect number");
		}else{
			printf("not a perfect number");
		}
	}
	if(n%i==0){
		s = s+i;
	}
	per(n,i-1,s);
	
}
