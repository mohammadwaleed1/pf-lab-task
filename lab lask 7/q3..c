#include <stdio.h>

int main() {
    int arr[12];
	int arr2[6];
 	int element;
    int i;
    for (i=0;i<12;i++){
	printf("enter number %d:",0+i);
	scanf("%d",&arr[i]);
}
printf("input array:{ ");
    
    for (i=0;i<12;i++){
	if(i==11){
	printf("%d",arr[i]);
	}else
	printf("%d, ",arr[i]);
}
printf("}\n");
    for (i = 0; i < 6; i++) {
        arr2[i]=arr[i*2]+arr[(i*2)+1];
}
printf("pair sum array :{ ");
    
    for (i=0;i<6;i++){
	if(i==5){
	printf("%d",arr2[i]);
	}else
	printf("%d, ",arr2[i]);
}    
printf("}");
return 0;
}
