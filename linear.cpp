#include<stdio.h>
int main(){
	int n,a[50],i,key;
	int flag=0;
	int count=0;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the %d elemtents\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the numbet to be searched\n");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key==a[i]){
			printf("the element is found in %d\n",i+1);
			flag=1;
		
			count++;
		}
	
	}
	if(flag=1){
		printf("the element %d times \n",count);
	}
	if(flag=0){
		printf("the element is not found\n");
	}
	
}