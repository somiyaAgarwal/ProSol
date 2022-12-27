#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three no...\n");
    scanf("%d%d%d",&a,&b,&c);
    int max = a;
    if(b>max){
        max = b;
    }else if(c>max){
        max = c;
    }
    printf("The largest no. is...%d",max);
}