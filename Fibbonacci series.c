#include<stdio.h>
int main()
{
	int n,a=0,b=1,i,c;
	printf("enter till how many terms u want....");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=3;i<=n;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	
	
}
