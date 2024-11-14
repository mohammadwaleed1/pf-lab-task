
#include<stdio.h>
#include<string.h>
int main(){
	int i,j=0;
	char text[20]="NAME IS WALEED";
	char key[]="QUBIT";
	char final_text[20]={0};
	int text_num[20];
	int key_num[20];
	int cipher[20];
	printf("Text: %s\n\n",text);
	for(i=0;i<20;i++){
		if(j>4){
			j=0;}
		key_num[i]=key[j];
		text_num[i]=text[i];
		j++;
	}
	for(i=0;i<20;i++){
		key_num[i]-=64;
		text_num[i]-=64;
		cipher[i]=key_num[i]+text_num[i];
		cipher[i]=cipher[i]%26;
		cipher[i]+=64;
		final_text[i]=cipher[i];
	}printf("Final Cipher: ");
	for(i=0;i<strlen(final_text);i++){
		printf("%c",final_text[i]);
	}
	return 0;
}