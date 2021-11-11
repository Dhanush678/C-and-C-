#include<Stdio.h>
#include<stdlib.h>
int main(){
	int low,high,i,j,temp,count,flag=0;
	printf("enter the range\n");
	scanf("%d%d",&low,&high);
	if(high<2){
		printf("there are no prime numbers\n");
					  exit(0);
	}
	if(low<2){
		++low;
	}
	if(low%2==0){
		low++;
	}
	for(i=low;i<=high;i=i+2){
		flag=0;
			   for(j=2;j<=i/2;j++){
			   					     if(i%j==0) {
									 flag=1;
									 	 break;
										}	
			   }
			   							  if(flag==0) {
										  	printf("%d\t",i);
															 								  	count++;
											 }
	}
}