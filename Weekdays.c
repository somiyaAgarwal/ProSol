#include <stdio.h>
int main(){
    int x=10,*p,**q,***s;
    p = &x;
    q = &p;
    s = &q;

    printf("address of q...%d\n",&q);
    printf("value of q...%d\n",q);
    printf("address of p...%d\n",q);
    printf("value of p...%d\n",*q);
    printf("address of x...%d\n",*q);
    printf("value of x...%d\n",**q);

    printf("\nThrough s...\n");

    printf("address of s...%d\n",&s);
    printf("value of s...%d\n",s);
    printf("address of q...%d\n",s);
    printf("value of q...%d\n",*s);
    printf("address of p...%d\n",*s);
    printf("value of p...%d\n",**s);
    printf("address of x...%d\n",**s);
    printf("value of x...%d\n",***s);
}
