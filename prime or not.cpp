#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,i,flag=0;
	printf("enter the number\n");
	scanf("%d",&a);


	
	b=a/2;
	for(i=2;i<b;i++){
		if(a%i==0){
			printf("%d is not prime\n",a);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d is prime\n",a);
	}

	

}
