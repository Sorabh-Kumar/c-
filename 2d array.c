#include<stdio.h>
    
    void main(){
        int  a[100][100], a1[100][100], a2[100][100];
        int r, c, r1, c1, r2, c2,i ,j ,k ;
        printf("enter size for matrix\n");
        scanf("%d %d",&r ,&c);
        //input
        printf("enter value \n");
        for(j=0; j<r; j++){
            for(i=0; i<c; i++)
                scanf("%d", &a[j][i]);
        }
        printf("enter size for matrix 2\n");
        scanf("%d %d",&r1 ,&c1);
        printf("enter value \n");
        for(j=0; j<r1; j++){
            for(i=0; i<c1; i++)
                scanf("%d", &a1[j][i]);
        }
        //logic
         if(c==r1){
          for(j=0; j<r1; j++)
            for(i=0; i<c; i++)
                a2[j][i] = 0;

          for(j=0; j<r1; j++)
            for(i=0; i<c; i++)
             for(k=0; k<c; k++){
                 a2[j][i]+= a[i][k]*a1[k][j];
             }
        //output

         }
         for(j=0; j<r; j++){
            for(i=0; i<c; i++)
                printf("%d\t", a[j][i]);
                printf("\n");
         }
          for(j=0; j<r1; j++){
            for(i=0; i<c1; i++)
                printf("%d\t", a1[j][i]);
                printf("\n");
        }
        for(j=0; j<r1; j++){
            for(i=0; i<c; i++)
             printf("%d\t", a2[j][i]);
             printf("\n");
    }    }