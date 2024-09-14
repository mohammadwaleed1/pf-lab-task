# include <stdio.h>
int main(){
	float units;
	float bill;
	float final_bill;
	printf("enter your units:");
	scanf("%f", &units);
	if(units<0){printf("invalid units;");}
	else if (units>0 && units<=30){ bill= units*0.6;}
	else if(units>30 && units<=110){bill=(30*0.6)+(units-30)*0.85;}
	else if (units>110 && units<=210){bill=(30*0.6)+(80*0.85)+(units-110)*1.30;}
	else if (units>210){bill=(30*0.6)+(80*0.85)+(100*1.30)+(units-210)*1.60;}
	final_bill= bill + (0.15*bill);
	printf("bill is =%f",final_bill);
	return 0;
	
}
		
		
		
		
			
		
	
		
