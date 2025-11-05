/*
Name:Paul Mutua
Reg:CT100/G/26214/25
Des:SCORES
*/

#include<stdio.h>

int main()
{
    int i,j,scores[2][4]={
    {65,92,35,70},
    {72,59,67,84}, };
    
    printf("The stored scores are:\n");
    for (i=0;i<2;i++) {
       for (j=0;j<4;j++){
          printf("%d\n",scores[i][j]);}
          }
    return 0;
}