#include<stdio.h>
  long int main(){
      float principal ,year ,intrest ,amount;
       printf("enter the principal amount\n");
       scanf("%f",&principal);
       printf("enter the year\n");
       scanf("%f",&year);
       printf("enter the interest rate\n");
       scanf("%f",&intrest);
       amount= principal+(principal*intrest*year)/100;
       printf("total amount will be=%f",amount);
  }