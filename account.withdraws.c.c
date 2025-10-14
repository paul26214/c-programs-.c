/*
NAME: PAUL MUTUA
REG:CT100/G/26214/25
DESCRIPTION:ACCOUNT WITHDRAWS
*/

#include<stdio.h>
int main()
{
	int balance = 10000;
	int amount;
	printf("Your current balance is %d \n",balance);
	
	while(balance>0){
		printf("Enter the amount you want to withdraw\n");
		scanf("%d", &amount);
		balance-=amount;
		printf("New Balance : =%d\n",balance);
		
	}
	printf("insuficient amount");
	return 0;
}