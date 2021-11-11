#include<stdio.h>
int main(){
	int a[100][100],b[100][100],i,j,m,n;
	printf("enter the rows and column of first matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of first matrixes\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
						 	scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of second matrixes\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
						 	scanf("%d",&b[i][j]);
		}
	}
	printf(" the sum of two matrix \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
						 	printf("%d\t",b[i][j]+a[i][j]);
		}
		 printf("\n");
	}
		printf(" the differenece of two matrix \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
						 	printf("%d\t",a[i][j]-b[i][j]);
		}
		 printf("\n");
	}
}