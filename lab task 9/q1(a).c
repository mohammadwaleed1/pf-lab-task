#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf ("%d",&n);
    int rows=2*n-1;
    int ml=(rows+1)/2;
    int str=1; 
    int spc=rows/2;
    for(int i=1;i<=rows;i++){
        for(int k=1;k<=spc;k++){
            printf(". ");
        }
        for(int j=1;j<=str;j++){
            printf("@");
        }
        if(i<ml){
            spc--;
            str+=1;
        }
        else{
            spc++;
            str-=1;
        }
        printf("\n");
    }


    return 0;
}