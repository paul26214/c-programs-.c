/*
NAME:PAUL MUTUA
REG:CT100/G/26214/25
DES:NUMBER GUESING GAME
*/

#include <stdio.h>
int main (){
	int pwd;
	int i =0;
	int password=2550;
	
	do{
		printf("Enter your password:\n");
		scanf("%d",&pwd);
		}
		
	while(pwd!=password);
	printf("Access Granted");
	return 0;
}