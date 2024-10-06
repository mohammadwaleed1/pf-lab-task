#include<stdio.h>
int main(){
	int i,n;
	int fac=1;
	printf("enter number");
	scanf("%d",&n);
	if(n<0){
		printf("invalid");
	}
	else{
		for(i=1;i<=n;i++){
			fac=fac*i;
		}
		printf("factorial is=%d",fac);}
		return 0;
	}

