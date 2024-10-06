#include<stdio.h>
int main(){
	int n;
	printf("enter number:");
	scanf("%d", &n);
	for (int i=2; i<n; i++){
	if (n%i==0){
		printf("%d is not prime\n",n);
	return 0;
  } 
}
printf("%d is prime\n",n);

int a=0,b=1,t;
printf("series is:");
for(int j=1;j<=n;j++){
	printf(" %d", a);
	t=a+b;
	a=b;
	b=t;
}
		return 0;
	
 }