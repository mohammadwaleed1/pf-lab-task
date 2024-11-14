#include<stdio.h>
#include<string.h>
int main(){
    char user[40];
    char word[40];
    char username;
    char password;
    char name[]="waleed";
    char pass[]="2242004";
    printf("enter username:");
    scanf("%s",user);
    printf("enter password:");
    scanf("%s",word);
    int result1=strcmp(user,name);
    int result2=strcmp(word,pass);
    if(result1==0 && result2==0)
    printf("access approved");
    else printf("access denied");
    return 0;

}