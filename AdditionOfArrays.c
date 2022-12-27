#include <stdio.h>
int main(){
	int i,j,n,m;
	printf("Name - Somiya Agarwal \n");
	printf("Roll no. - 2100321530167 \n");
	printf("Enter the order of array..");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n],c[m][n];
	printf("Enter elements of 1st array.. \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of 2nd array..\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("Addition of both arrays is...\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}printf("\n");
	}
}
