#include<stdio.h>
int main(){

	int matrix[4][4];
	for(int i=0;i<4;i++){
		printf("team %d: \n",i+1);
		for(int j=0;j<4;j++){
			printf("Score of round %d:",j+1);
			scanf(" %d",&matrix[i][j]);
		}printf("\n");
	}
    printf("matrix is:\n");
    for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf(" %d",matrix[i][j]);
		}
        printf("\n");
	}
	for (int col = 0; col < 4; col++) {
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (matrix[i][col] > matrix[j][col]) {
                    int temp = matrix[i][col];
                    matrix[i][col] = matrix[j][col];
                    matrix[j][col] = temp;
                }
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

