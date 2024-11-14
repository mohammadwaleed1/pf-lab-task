#include<stdio.h>
#include<string.h>
int main(){
    int b,w,n;
    int cost;
    char a[]="too few nuts";
    char d[]="too few washers";
    char c[]="order is ok";
    printf("number of nuts:\t\t\t\t");
    scanf("%d",&n);
    printf("number of bolts:\t\t\t");
    scanf("%d",&b);
    printf("number of washer:\t\t\t");
    scanf("%d",&w);
    if(n<b){
    printf("check for order:\t\t\t\t");
    puts(a);}
    if(2*w<b){
    printf("check for order:\t\t\t\t");
    puts(d);}
    else 
    puts(c);
    printf("cost is:                                ");
    cost=(n*3)+(w*1)+(b*5);
    printf("%d",cost);
    return 0;
}