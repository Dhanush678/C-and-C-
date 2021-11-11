#include<stdio.h>
int main(){
	int first,middle,last;
	int i,a[100],n;
	int key;
	printf("enter the number of limit\n");
	scanf("%d",&n);
	printf("enter the elements \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the key\n");
	scanf("%d",&key);
	first=0;last=n-1;
	middle=(first+last)/2;
	while(first<=last){
	
	
		if(a[middle]<key){
			first=middle+1;
		}
		else if(a[middle]=key){
			printf("the value is found in %d   is located at %d\n",key,middle+1);
			break;
		}
		else{
			last=middle-1;
		middle=(first+last)/2;
		}
	}
	if(first>last){
		printf("the elemts is not found\n");
	}
	
}