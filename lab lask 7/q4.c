#include<stdio.h>
int main(){
int i;
int sum=0;
int A1[15];
for (i=0;i<15;i++){
	printf("enter number:");
	scanf("%d",&A1[i]);
}
for (i=0;i<15;i++){
	sum=sum+A1[i];
}
printf("sum is:%d", sum);
return 0;
}
