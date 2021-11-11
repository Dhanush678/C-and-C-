#include<stdio.h>
#include<math.h>
int main(){
	int a[100][100],i,j,m,n;
	float norm,trace,normal;
	printf("enter the number of rows and column\n");
	scanf("%d%d",&m,&n);
	printf("enter the elemts\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
 	      scanf("%d",&a[i][j]);
		}
		}
	for(i=0;i<m;i++){
		
						 	trace=trace+a[i][i];
		
	
		
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
	      norm=norm+a[i][j]*a[i][j];
		
	}
		
	}
	normal=sqrt(norm);
	printf("the trace of matrix is %.4f\n",trace);
	printf("the normal of the matrix is %.3f\n",normal);
	
	
}