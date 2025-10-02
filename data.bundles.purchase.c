/*
NAME:paul mutua
REG:CT100/G/26214/25
DESCRIPTION:WATER BILL CALCULATER
*/

#include<stdio.h>
int main(){
	
	int choice;
	
	printf("select one choice in the above \n");
	printf("1:100 Mbs FOR 50 KES \n");
	printf("2:500Mbs for 200 KES \n");
	printf("3:1GB for 350 KES \n");
	printf("4:2GB for 500 KES \n");
	
	printf("select a choice (1-4)\n");
	scanf("%d",&choice);
	switch (choice){
		case 1:
		printf("You have selected 100mbs for 50 KES");
	break;
	case 2:
		printf("You have selected 500mbs for 200 KES");
	break;
	case 3:
		printf("You have selected 1GB for 350 KES");
	break;
    case 4:
    	printf("you have selected 2GB for 600 KES");
    break;
    default:
		printf("Invalid choice\n");}
return 0;
}