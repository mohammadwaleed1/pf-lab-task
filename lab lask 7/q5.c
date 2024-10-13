#include<stdio.h>
int main(){
int i,j;
int A1[20];
for (i=0;i<20;i++){
	printf("enter number:");
	scanf("%d",&A1[i]);
}
for (j=19;j>=0;j--){
	printf("%d ",A1[j]);
}
return 0;
}
