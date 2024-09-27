#include <stdio.h>
int main() {
int A1;
int A2;
int A3;
int sum;
printf("Enter angle 1: ");
scanf("%d",&A1);
printf("Enter angle 2: ");
scanf("%d",&A2);
printf("Enter angle 3: ");
scanf("%d",&A3);
sum=A1+A2+A3;
if (A1>0 && A2>0 && A3>0 ){
	if (sum==180)
	{printf("it is a triangle");}
	else{printf("not s triangle");}
}
else printf("invalid angles");
return 0;
}
