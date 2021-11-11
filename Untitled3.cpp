#include<stdio.h>
int main(){
	int a[100][100],b[100][100],i,j,m,n;
	printf("enter the rows and column of  matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of  matrixes\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
						 	scanf("%d",&a[i][j]);
		}
	}
		 printf(" the trandpose of matrix is \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
						 	printf("%d\t",a[j][i]);
		}
		 printf("\n");
	}
	
}