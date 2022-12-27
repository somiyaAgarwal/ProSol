//factorial using tail recursion
#include <stdio.h>
int fact(int ,int );
int main(){
	int n,i,m;
	scanf("%d",&n);
	m = fact(n,n-1);
	printf("%d",m);
}
int fact(int n,int x){
	if(x==1){
		return(n);
	}
	n = n*x;
	fact(n,x-1);
}
