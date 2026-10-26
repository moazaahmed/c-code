#include<stdio.h>
int main(){
    int i,n;
    printf("enter number of elements:");
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int j,k;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
                for(k=j;k<n-1;k++){
                    ar[k]=ar[k+1];
                }
                    n--;
                    j--;
                }
            }
        }
    for(i=0;i<n;i++){
        printf("%d ", ar[i]);
    }
    return 0;
    }