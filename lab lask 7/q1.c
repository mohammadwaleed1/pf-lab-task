#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; 
 	int element;
    int i;
    printf("array:{ ");
    for (i=0;i<5;i++){
	if(i==4){
	printf("%d",arr[i]);
	}else
	printf("%d, ",arr[i]);
}
printf("}\n");
printf("enter element:");
scanf("%d",&element);
    for (i = 0; i < 5; i++) {
        if (arr[i] == element) {
            printf("Element %d found at position %d\n", element, i);
			break;}	
		}
		if(arr[i] != element){
			printf("element not found");}


    return 0;
}
