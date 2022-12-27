#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter...\n");
    int n,i=0;
    scanf("%d",&n);
    printf("Factors are...\n");
    for(i=1;i<=sqrt(n)+1;i++){
        if(n%i==0){
            printf("%d",i);
        }
    }
}