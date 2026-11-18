#include<stdio.h>
int rplacenegative(int ar[], int n){
    for(int i=0;i<n;i++){
        if(ar[i]<0){
            ar[i]=0;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("the array is:");
    for(i=0;i<n;i++){
        printf("%d ", ar[i]);
    }
    rplacenegative(ar, n);
    printf("\nnew array: ");
    for(i=0;i<n;i++){
        printf("%d ", ar[i]);
    }
}