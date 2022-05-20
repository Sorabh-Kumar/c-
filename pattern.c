#include<stdio.h>
  
  void main(){
      int a;
      int m=1;
      scanf("%d",&a);
      for(int n=1;n<a ;n++){
          for(int i=1; i<n; i++){
          printf("%d",m++);}
          printf("\n");
      }
  }