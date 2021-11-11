#include<stdio.h>
int main(){
	int n,m;
	int rev=0,val;
	int ori;

	printf("ENTER THE NUMBER\n");
	scanf("%d",&m);
	ori=m;
	while(m!=0){
		val=m%10;
		rev=rev*10+val;
		m=m/10;
		
	}
	if(rev!=ori){
			printf("the reverse of the %d is %d",ori,rev);
	}
	else{
		printf("it is palindrome\n");
	}
}