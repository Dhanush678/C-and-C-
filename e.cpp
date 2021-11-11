#include<stdio.h>
int main(){
    int a,i,n;
    int even=0;
	int odd=0;
    printf("enter the limit of natural number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            even=even+i;
        }
        else{
            odd=odd+i;
        }
    }
    printf("the sum of even number is %d\n",even);
    printf("the sum of the odd numbers is %d\n",odd);


}