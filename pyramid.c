#include<stdio.h>
   
   int main(){
       int a;
       scanf("%d",&a);
       for(int n=1; n<=a; n++){
           for(int i=1; i<=a-n; i++){
               printf(" ");
           }
           for(int b=1; b<= 2*n-1; b++){
               if( b==1||b==2*n-1 )
                printf("*");
               else 
                   printf(" ");
           }
           printf("\n");
       }
   }