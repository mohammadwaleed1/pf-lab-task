#include <stdio.h>

int main() {
    int arr[10];
	int arr2[10];
 	int element;
    int i;
    for (i=0;i<10;i++){
	printf("enter number %d:",0+i);
	scanf("%d",&arr[i]);
}
printf("before:{ ");
    
    for (i=0;i<10;i++){
	if(i==9){
	printf("%d",arr[i]);
	}else
	printf("%d, ",arr[i]);
}
printf("}\n");
arr2[9]=arr[0];
    for (i = 0; i < 9; i++) {
        arr2[i]=arr[i+1];
}
printf("after:{ ");
    
    for (i=0;i<10;i++){
	if(i==9){
	printf("%d",arr2[i]);
	}else
	printf("%d, ",arr2[i]);
}    
printf("}");
return 0;
}
