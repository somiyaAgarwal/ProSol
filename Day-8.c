#include <stdio.h>
#include <math.h>
int main(){
    //Program no. - 3
    /*int n,s;
    printf("Enter...");
    scanf("%d",&n);
    while((n/10)>0){
        s=0;
        while(n>0){
         int r = n%10;
        s = s+r;
        n = n/10;
        }if((s/10)>0){
            n = s;
        }else{
            printf("%d",s);
            break;
        }
    }
    
    //Program no - 4 Balanced number
    int n,s;
    printf("Enter...");
    scanf("%d",&n);
    int s=0;
    while(n>0){
        int r = n%10;
        s++;
        n = n/10;
    }
    int m = (s/2)+1;
    while(m>0){
        so = so+(m%10);
        
    }

    //Program no - 5 Least prime factor
    int n;
    printf("Enter..");
    scanf("%d",&n);
    printf("1 ");
    for(int i=2;i<=n;i++){
        for(int j=2;j<=i;j++){
            if(i%j==0){
                printf("%d ",j);
                break;
            }
        }
    }

    //Program no - 6 Largest possible rect
    int r;
    printf("Enter...");
    scanf("%d",&r);
    int a = 2*r*r;
    printf("%d",a);*/
    
    //Program no - 7 Prime factors
    int n;
    printf("Enter...");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }

}