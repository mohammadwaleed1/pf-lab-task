#include <stdio.h>
int main() {
	float cost;
	float final_cost;
	float amount_saved;
	printf("enter your total cost:");
	scanf("%f", &cost);
	if(cost > 0 && cost < 1500 ){
	printf("cost before discount=%f",cost);
	printf("cost saved=%f",0.07*cost);
	printf("cost after discount=%f",0.93*cost);
 }	else if(cost>1500 && cost<3000){
	printf("cost before discount=%f\n",cost);
	printf("cost saved=%f\n",0.12*cost);
	printf("cost after discount=%f",0.88*cost);
}else if (cost>3000 && cost <5000){
	printf("cost before discount=%f\n",cost);
	printf("cost saved=%f\n",0.22*cost);
	printf("cost after discount=%f",0.78*cost);
}else {
	printf("cost before discount=%f\n",cost);
	printf("cost saved=%f\n",0.30*cost);
	printf("cost after discount=%f",0.70*cost);
	return 0;
}
}
