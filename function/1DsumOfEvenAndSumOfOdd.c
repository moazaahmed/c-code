#include<stdio.h>
int sumeven(int ar[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            sum+=ar[i];
        }
    }
    return sum;
}
int sumodd(int ar[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2!=0){
            sum+=ar[i];
        }
    }
    return sum;
}
int main(){
    int n;
    int esum;
    int osum;
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
    esum=sumeven(ar, n);
    osum=sumodd(ar, n);
    printf("\nsum of even elements:%d", esum);
    printf("\nsum of odd elements:%d", osum);
}