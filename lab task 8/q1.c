#include<stdio.h>
int main(){
	int i,j,sum1,sum2;
	int a1[3][3];
	for(i=0;i<3;i++){
		printf("Person %d: \n",i+1);
		for(j=0;j<3;j++){
			printf("Score %d:",j+1);
			scanf(" %d",&a1[i][j]);
		}printf("\n");
	}
	for(i=0;i<3;i++){
		sum1=0;
		for(j=0;j<3;j++){
			sum1+=a1[i][j];
		}
		printf("Total score of person %d: %d \n",i+1,sum1);
	}
	printf("\n");
	for(j=0;j<3;j++){
		sum2=0;
		for(i=0;i<3;i++){
			sum2+=a1[i][j];
		}
		printf("Total score of activity %d: %d \n",j+1,sum2);
	}
	return 0;
}