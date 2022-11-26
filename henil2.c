#include <stdio.h>
#include<math.h>>
int main()
{
    float principal, rate, time, simpel_interest, compound_interest;

    printf(" Enter the value of principal : ");
    scanf("%f", &principal);
    printf("got it! /n");
    printf("Now, Enter the value of rate :");
    scanf("%f", &rate);
    printf("got it! /n");
    printf ("Enter the time : ");
    scanf("%f", &time);

simpel_interest = principal * rate / 100 * time;
compound_interest = principal * pow ((1 + rate/100), time)-principal;

 printf("your simpel interest is %f", simpel_interest);
 printf("your compound interest is %f", compound_interest);

 return 0;

    


}