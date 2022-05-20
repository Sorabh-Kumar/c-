#include<stdio.h>
#define max 100
    void main(){
        int n, a[max];
            printf("enter the no.");
            scanf("%d",&n);
        for(int i = 0;i<n ;i++){
            printf("enter marks");
            scanf("%d",&a[i]);
        }
        for(int i = 0;i<n ;i++){
            if(a[i]%2==0)
             printf("0");
            else
             printf("1");
        }
}