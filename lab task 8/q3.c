#include<stdio.h>
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
int c=n;
for(int i=n;i>=0;i--){
    int b=i;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=c;k++){
            printf("%d ",b);
            b--;
        }
        if(i!=0)printf("\n");
         c--; 
        
}     
printf("\b\b\b\b\b\b");
for(int i=2;i<=n;i++){
    int a=i;
    for(int k=1;k<=n-i;k++){
         printf(" ");
}
    for(int j=1;j<=i;j++){
         printf("%d ",a);
         a--;
    }
        printf("\n");
 }
 
return 0;
}