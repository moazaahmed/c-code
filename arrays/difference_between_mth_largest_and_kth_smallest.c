#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,j;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int ar[n];
    printf("the ar are: ");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int k,m,temp;
    printf("enter k-th largest number: ");
    scanf("%d",&k);
    printf("enter m-th smallest number: ");
    scanf("%d",&m);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(ar[j] > ar[j+1]){
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    printf("%d-th largest number is %d\n", k, ar[n-k]);
    printf("%d-th smallst number is %d\n", m, ar[m-1]);
    int difference=abs(ar[n-k] - ar[m-1]);
    printf("difference: %d\n", difference);
    }