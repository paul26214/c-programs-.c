/*
NAME:PAUL MUTUA
REG:CT100/G/26214/25
DES:FARE CALCULATOR
*/

#include <stdio.h>

double calculateFare(double distance) {
    double fareRate = 50.0; 
    return distance * fareRate;
}

int main() {
    double distance;

    printf("Enter the distance traveled in kilometers: ");
    scanf("%lf", &distance);

    double totalFare = calculateFare(distance);
    printf("Total fare: KSh. %.2f\n", totalFare);

    return 0;
}
