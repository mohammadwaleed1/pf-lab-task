#include<stdio.h>
#include<string.h>
int main(){
    char names[5][40];
    for(int i=0;i<5;i++){
        printf("enter name: %d ",i+1);
        scanf("%s",names[i]);
    }
    printf("\n");
    printf("enter name to be found:");
    char str[40];
    int flag=0;
    scanf("%s",str);
    for(int i=0;i<5;i++){
    if(strcmp(str,names[i])==0){
    flag=1;
    break;
    }
} 
    
    if(flag==0) 
    printf("not found");
    else printf("found");
    
    return 0;

}