/*
NAME:PAUL MUTUA
REG:CT100/G/26214/25
DES:NUMBER GUESING GAME
*/

#include <stdio.h>
int main (){
	int luckynumber;
    int guess;
    int attempts=0;
    
    luckynumber = (rand() % 20) + 1;
    
    printf("WELCOME TO THE LUCKY NUMBER GAME!\n");
	printf("THERE IS ONE LUCKY NUMBER BETWEEN 1 TO 20. TRY TO GUEES IT!\n");
	
	do{
		printf("Enter your guess:");
		scanf("%d", guess);
		attempts++;
		
		if(guess > luckynumber){
			printf("Number too high!!\n");
		}
		else if(guess < luckynumber){
			printf("Number too low!!\n");
		}
		
		else {
			printf("Congratulation ! You guessed the correct number\n");
			scanf("Total Attempts %d\n");
		}
		
    } while (guess != luckynumber);
	
	return 0;	
}
