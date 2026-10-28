#include<stdio.h>
int main(){
    int i,n;
    printf("enter number of terms: ");
    scanf("%d",&n);
    int ar[100];
    ar[0]=0;
    ar[1]=1;
    int sum=0;
    for(i=2;i<n;i++){
        ar[i]=ar[i-1]+ ar[i-2];
    }
    for(i=0;i<n;i++){
        printf("%d ", ar[i]);
        sum+=ar[i];
    }
    printf("\nsum: %d", sum);
    return 0;
    }
