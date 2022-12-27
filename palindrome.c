#include <stdio.h>
int main()
{
	int n,r,ans=0,temp,n1;
	printf("ENTER THE 3 DIGIT NUMBER");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		ans=ans*10+r;
		n=n/10;
	}if(ans==temp){
		printf("%d is a palindrome",ans);
	}else{
		printf("%d is not a palindrome",ans);
	}
	while(n1!=0)
	{
		
	}
}
