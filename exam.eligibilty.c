/*
NAME:paul Mutua
REG:CT100/G/26214/25
DESCRIPTION:Exam Eligibilty
*/

#include <stdio.h> 
int main(){
	
	int attendance,marks;
	
	printf("Enter Attendance:\n");
	scanf("%d",&attendance);
	
	printf("Enter your marks:\n");
	scanf("%d",&marks);
	
	if(attendance>=75&&marks>=40){printf("you are eligible");}
		else {printf("your not eligible");}
return 0;
}
