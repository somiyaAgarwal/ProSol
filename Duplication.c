#include <stdio.h>
int main(){
	int n,a[100],i,j,k,m[100];
	printf("enter the size of array..");
	scanf("%d",&n);
	printf("enter the elements..");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Repeated elements...");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i] == a[j]){
				m[k] = a[i];
				k++;
				break;
			}
		}
	}
	for(i=0;i<k;i++){
		printf("%d \n",m[i]);
	}
}
