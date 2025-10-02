/*
NAME:Paul Mutua
REG:CT100/G/26214/25
DESCRIPTION:WATER BILL CALCULATER
*/

#include <stdio.h>
int main(){
	int units;
	float bill;
	
	printf("enter the number of water units consumed: ");
	scanf("%d",&units);
	if(units>=0&&units<=30){bill=units*20;}
		 else if(units>=31&&units<=60){bill=units*25;}
			else if(units>60);{bill=units*30;}
	printf("total bill= KES %0.2f\n",bill);
return 0;	
}

