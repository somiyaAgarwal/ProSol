#include <stdio.h>
int main(){
	int x,y;
	printf("Enter the coordinates of point..");
	scanf("%d%d",&x,&y);
	if(x==0 && y==0){
		printf("origin");
	}else if(x>0 && y>0){
		printf("1st quad");
	}else if(x<0 && y>0){
		printf("2nd quad");
	}else if(x<0 && y<0){
		printf("3rd quad");
	}else if(x>0 && y<0){
		printf("4th quad");
	}else{
		printf("It's on axis");
	}
}
