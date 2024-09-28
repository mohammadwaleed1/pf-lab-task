#include<stdio.h>
int main(){
	int num, count;
	printf("enter number's binary representation:");
	scanf("%d",&num);
	if (num%1==1)count++;
	if (num%2==1)count++;
	if (num%4==1)count++;
	if (num%8==1)count++;
	if (num%16==1)count++;
	if (num%32==1)count++;
	if (num%64==1)count++;
	if (num%128==0)count++;
	printf("%d",count);
	return 0;
	}