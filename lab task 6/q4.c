#include<stdio.h>
int main(){
	int num;
	int sum;
	do{
	printf("enter number:");
	scanf("%d",&num);
	sum+= num;
	if(num!=0){
	printf("sum=%d\n", sum);}
}	while ( num!=0);
	printf("current sum=%d",sum);
	return 0;
}

	
