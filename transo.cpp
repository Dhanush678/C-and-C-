#include<stdio.h>
int main(){
	int a[100][100],i,j,n,m;
	printf("enter the rows and column of matrix\n");
	scanf("%d%d",&m,&m);
	printf("enter the elemts of matrix\n");
				for(i=0;i<m;i++){
					for(j=0;j<n;j++){
		 	       scanf("%d",&a[i][j]);
															 				 	
															 				 													 				 	
					}
				}
	printf("the transpose of matrix\n");
							for(i=0;i<m;i++){
								for(j=0;j<n;j++){
					 			printf("%d",a[j][i]);
																		 				 	
																		 				 													 				 	
								}
								 printf("\n");
							}
	
}