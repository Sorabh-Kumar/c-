#include<stdio.h>

int main(){
    int n , a;
    printf("Enter the number");
    scanf("%d",&n);
    a=2;
    for(int i=2; n>a;i++){
      if (n%a==0)
       printf("1");
      else 
      printf("0");
    }

}