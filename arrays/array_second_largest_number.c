#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int largest=ar[0];
    int second_largest=ar[0];
    for(i=0;i<n;i++){
        if(ar[i]>largest){
            second_largest=largest;
            largest=ar[i];
        }
        else if(ar[i]<largest && ar[i]>second_largest){
            second_largest=ar[i];
        }
    }
    printf("second largest: %d", second_largest);
    return 0;
}