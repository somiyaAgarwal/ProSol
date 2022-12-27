#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the sides of triangle..");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c){
		printf("Equilateral triangle");
	}else if((a+b)>c && (b+c)>a && (a+c)>b && (a==b || b==c || a==c)){
		printf("Isosceles triangle");
	}else if((a+b)>c && (b+c)>a && (a+c)>b){
		printf("Scalene triangle");
	}else{
		printf("Not a triangle");
	}
}
