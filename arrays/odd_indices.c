#include<stdio.h>
int main(){
    int i,n;
    printf("enter number of elements:");
    scanf("%d",&n);
    int ar[n];
    printf("the array is: ");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int odd_indices_sum=0;
    for(i=1;i<n;i+=2){
        odd_indices_sum+=ar[i];
    }
    printf("odd sum= %d", odd_indices_sum);
    return 0;
    }