/*
Name:Paul Mutua
Reg:CT100/G/26214/25
Des:CALCULATE WATER BILL
*/
#include <stdio.h>

int main (){
	int units;
	float bill;
	
	printf("Enter the units consumed\n");
	scanf("%i",units);
	if (units>=0&&units<=100){bill=units*10;}
		else if(units>100&&units<=200){bill=units*15;}
			else if(units>200){bill=units*20;}
	printf("total bill= Kes %0.1f\n", bill);		
	
	return 0;
} 