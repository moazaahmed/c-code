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
    int even_indices_sum=0;
    for(i=1;i<n;i+=2){
        even_indices_sum+=ar[i];
    }
    printf("even sum= %d", even_indices_sum);
    return 0;
    }