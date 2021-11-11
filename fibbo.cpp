#include<stdio.h>
int main()
{
	int a,i,num0,num1,num2,n;
	printf("enter the limit\n");
	scanf("%d",&n);
	
	
		num0=0;num1=1;
		
				printf("THE FIBBONACCI SEQUENCE IS\n");
				
					printf("%d\t",num0);
					
						printf("%d\t",num1);
						
								for(i=0;i<n;i++){
									num2=num1+num0;
									printf("%d",num2);
									printf("\t");
									num0=num1;
									num1=num2;
								}
}