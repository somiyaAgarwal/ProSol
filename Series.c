#include <stdio.h> 
int main(){
	int i,f,n,x,p;
	float s=1;
	printf("Enter till how many no. u want...");
	scanf("%d",&n);
	printf("Enter the value of x..");
	scanf("%d",&x);
	for(i=1;i<n;i++){
		p = i*x;
		f = f*i;
		s = s+ p/f;
		p++;
	}
	printf("%f",s);
	
}

