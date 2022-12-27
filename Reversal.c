#include <stdio.h>
int main(){
	int n,a[100],i,m=0;
	printf("enter the size of array..");
	scanf("%d",&n);
	printf("enter the elements..");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s = 0;
	int l = n-1;
	while(s<=l){
		m = a[s];
		a[s] = a[l];
		a[l] = m;
		s++;
		l--;
	}
	printf("The reversed array is..");
	for(i=0;i<n;i++){
		printf("%d \n",a[i]);
	}

}


