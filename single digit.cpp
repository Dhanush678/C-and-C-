#include<stdio.h>
int main(){
	int m,n;
	int sum=0;
	printf("enter the number\n");
	scanf("%d",&m);
	while(m>0){
		n=m%10;
		sum=sum+n;
		m=m/10;
		
	}
	printf("the sum of number is %d\n",sum);
}