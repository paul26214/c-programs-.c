/*
Name:Paul Mutua
Reg:CT100/G/26214/25
Des:promt my age,my phone number,weight
*/

#include<stdio.h>//pre-processor directive printf()

int main(){
	int age;
	printf("what is your age\n");
	scanf("%d",&age);
	printf("your age is %d\n",age);
	
	float weight;
	printf("Enter your weight\n");
	scanf("%f",&weight);
	printf("your weight is %f\n",weight);
	
	char phonenumber;
	printf("Enter your phone number\n");
	scanf("%s", &phonenumber);
	printf("your phnone number is %s\n",phonenumber);
	
	
	
}