#include<stdio.h>
int main(){
	int n;
	printf("enter number:");
	scanf("%d", &n);
	for (int i=2; i<n; i++){
	if (n%i==0){
		printf("%d is not prime",n);
		return 0 ;
	}
}
	printf("%d is prime",n);
	return 0;
	
	
}