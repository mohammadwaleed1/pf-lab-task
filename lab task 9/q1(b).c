#include<stdio.h>
int main(){
    int n;
    int a;
    printf("enter n");
    scanf("%d",&n);
    int spc=n-1;
    for(int i=1;i<=n;i++){
    int b=i-1;
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=i-1;k++){
            printf("%d",b);
            b--;
        }
         printf("\n");
    }
        return 0;
}