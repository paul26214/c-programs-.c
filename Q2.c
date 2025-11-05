#include<stdio.h>

int main()
{
    float hours,wage;
    float grosspay, tax, netpay;
    printf("Enter hours worked in a week:\n");
    scanf("%f",&hours);
    printf("Enter hourly wage:\n");
    scanf("%f",&wage);
    
    if (hours<=40) grosspay=hours*wage;
    else 
        grosspay=(40*wage) +((hours-40) *wage*1.5) ;
        
    if (grosspay<=600) tax=0.15*grosspay;
    else
        tax=(0.15*600)+ (0.20*(grosspay-600)) ;
        
    netpay=grosspay-tax;
    
    printf("Grosspay:$%.2f\n",grosspay);   
    printf("Taxes :$% .2f\n",netpay); 
    return 0;
}