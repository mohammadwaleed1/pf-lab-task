#include<stdio.h>
int main(){
	int num;
	printf("enter num:");
	scanf("%d",&num);
	if (num & 1==1)
	printf("odd");
	else if (num & 1==0);
	printf("even");
	return 0;
}