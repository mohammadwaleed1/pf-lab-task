#include<stdio.h>
int main(){
int i,j;
int min,max;
int A1[30];
for (i=0;i<30;i++){
	printf("enter number %d:",1+i);
	scanf("%d",&A1[i]);

}	max=min=A1[0];
for (j=1;j<30;j++){
	if(A1[j]<min)
	{min=A1[j];}
	if(A1[j]>max)
	{max=A1[j];}
}
printf("max is: %d\n",max);
printf("min is: %d\n",min);
return 0;
}
