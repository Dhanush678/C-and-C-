#include<stdio.h>
#include<math.h>
int main(){
	int i,j,n;
	float  a[100];
	float mean,sum=0,vari,std,sum1=0;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the elemts");
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++){
		sum += a[i];
	}
	mean=sum/n;
	for(i=0;i<n;i++){
		sum1=sum1+pow((a[i]-mean),2);
	}
	vari=sum1/n;
	std=sqrt(vari);
					 		 		 			
	printf("%.2f\n",vari);
	printf("%.2f\n",std);
}