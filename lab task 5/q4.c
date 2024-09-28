#include<stdio.h>
int main(){
	float bill;
	int ms;
	printf("enter your bill:");
	scanf("%f", &bill);
	printf("has membership(1 for yess and 0 for no):");
	scanf("%d",&ms);
	bill>100 && ms==1? printf("eligible for discount"):printf("not eligible");
	return 0;
}