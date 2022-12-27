#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    scanf("Enter...%d",&n);
    for(i=0;i<sqrt(n);i++){
    	if(n%i==0){
            printf("factors are... %d",i);
        }
	}
	
}