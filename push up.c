#include<stdio.h>

  int main(){
      int energy, push;
      push=0;
      printf("enter energy level\n");
      scanf("%d",&energy);
        for(energy;energy>0;energy--)
        {
            push=push+1;
        }
        printf("total no. of push ups= %d",push);
  }