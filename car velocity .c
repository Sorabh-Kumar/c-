#include<stdio.h>
  void main(){
      float v ,u ,s ,a ;
      printf("enter the intial velocity of car \n");
      scanf("%f",&u);
      printf("enter the accleration of car \n");
      scanf("%f", &a);
      printf("enter distance travel by car \n");
      scanf("%f",&s);
      (v*v) = (u*u) + 2*a*s ;
      printf("final velocity for car will be=%f",v);
  }