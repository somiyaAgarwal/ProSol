#include <stdio.h>
int prime(int g){
	int j,c=0,p;
	p=g;
	for(j=1;j<=p;j++){
		if(p%j==0){
			c++;
			if(c==3){
				break;
			}
		}
	}
	if(c==2){
		printf("%d ",g);
	}
}
int main(){
	int m,n,i;
	printf("Enter..");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		prime(i);
	}
}
