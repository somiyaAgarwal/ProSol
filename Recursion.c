#include<stdio.h>
int rec(int x);
int main(){
	int a,fact;
	scanf("%d",&a);
	fact=rec(a);
	printf("%d",fact);	
}
int rec(int x){

	int f;
	if(x==1){
		return(1);
	}else{
		f=x*rec(x-1);
		return(f);	
	}
}  
