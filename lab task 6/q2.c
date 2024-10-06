#include<stdio.h>
int main(){
int n;
int i=2;
printf("Enter number: ");
scanf("%d",&n);
if(n>=1){
while(i<=n){
printf("%d\n",i);
i+=2;
}
}
return 0;
}
