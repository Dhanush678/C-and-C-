#include<stdio.h>
int main(){
	int a[100],i,n,j,temp;
	printf("enter the limit of elements\n");
	scanf("%d",&n);
	printf("enter the elements \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("the sorted elements are \n");
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1])	{
				temp=a[j];
				a[j]=a[j+1]	;
				a[j+1]=temp;		 	
			}		   	
						   	
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}