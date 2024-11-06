#include<stdio.h>
int main(){
	int i,j,sum1=0,sum2=0;
    int m,n;
	int a1[m][n];
    int a2[m][n];
    printf("enter m");
    scanf("%d",&m);
    printf("enter n");
    scanf("%d",&n);
    printf("matrix 1:\n");
	for(i=0;i<m;i++){
	    printf("element of row %d:",1+i);
		for(j=0;j<n;j++){
			scanf(" %d",&a1[i][j]);
		}
	}
    printf("\n");
    printf("matrix 2:\n");
	for(i=0;i<m;i++){
	printf("element of row %d:",1+i);
		for(j=0;j<n;j++){
			scanf(" %d",&a2[i][j]);
		}
	}
    printf("\n");
    for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum1+=a1[i][j];
		}
	}
    printf("sum of matrix 1:%d\n",sum1);
    for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum2+=a2[i][j];
		}
	}
	printf("sum of matrix 2:%d\n",sum2);
    printf("combine sum = %d",sum1+sum2);
    return 0;
}