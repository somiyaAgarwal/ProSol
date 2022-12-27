#include <stdio.h>
int main(){
	int i,j,k,l=1,n,p1,m;
	printf("Enter the no. of rows..");
	scanf("%d",&n);
	
	
/*	1
	23
	345
	4567*/
	
	/*for(i=1;i<=n;i++){
		for(j=i;j<i+i;j++){
			printf("%d",j);
		}printf("\n");
	}*/
	
	
	
/*  A
	BB
	CCC*/
	
	/*for(i=1;i<=n;i++){
		for(j=i;j<i+i;j++){
			printf("%c",64+i);
		}printf("\n");
	}*/
	
/*  A
	BC
	CDE
	DEFG*/
	
	/*for(i=1;i<=n;i++){
		for(j=i;j<i+i;j++){
			printf("%c",64+j);
		}printf("\n");
	}*/
	
	
/*  E
	DE
	CDE
	BCDE
	ABCDE*/
	
	/*for(i=n;i>0;i--){
		for(j=i;j<i+l;j++){
			printf("%c",64+j);
		}printf("\n");
		l++;
	}*/
	
	
/*  */

	
	
	/*for(i=1;i<5;i++){
		for(j=1;j<=(2*i-1);j++){
			for(k=4-i;k>=j;k--){
				printf(" ");
			}printf("*");
		}printf("\n");
	}*/
	/*p1 = (n/2)+1;
	m=0;
	for(i=1;i<=n;i++){
		if(i>p1){
			for(j=p1-m;j>0;j--){
				for(k=1;k<=i-p1;k++){
					printf(" ");
				}printf(" *");	
			}printf("\n");
			m= m+2;
		}else{
			for(j=1;j<=(2*i-1);j++){
				for(k=p1-i;k>0;k--){
					printf(" ");
				}printf(" *");	
			}printf("\n");
		}
	}*/
}
