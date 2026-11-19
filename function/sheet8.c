#include<stdio.h>
int modifiedarray(int ar[],int n){
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            ar[i]=ar[i]*ar[i];
        }
        else if(ar[i]%2!=0){
             ar[i]=ar[i]*ar[i]*ar[i];
        }
    }
}

int main (){
    int i,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    modifiedarray(ar, n);
    printf("modified array: ");
    for(i=0;i<n;i++){
        printf("%d ", ar[i]);
    }
}