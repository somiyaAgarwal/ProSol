#include <stdio.h>
int main(){
	int total;
	float da,hra,allow,pf,basic;
	char g;
	printf("Enter basic salary..");
	scanf("%d",&basic);
	printf("Enter grade..");
	scanf("%c \n",&g);
	hra = 0.2*basic;
	da = 0.5*basic;
	pf = 0.11*basic;
	switch(g){
		case 'A':
			allow = 1700;
			break;
		case 'B':
			allow = 1500;
			break;
		default:
			allow = 1300;
			break;
	}
	total = basic+hra+da+allow-pf;
	printf("Total salary is..%d",total);
	
	
	
}
