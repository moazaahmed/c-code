#include<stdio.h>
float calculateproductEven(int ar[], int n){
    int product=1;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            product*=ar[i];
        }
    }
    return product;
}
float calculatesumodd(int ar[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2!=0){
            sum+=ar[i];
        }
    }
    return sum;
}
int main(){
    int i,n,eproduct,osum;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    eproduct=calculateproductEven(ar, n);
    osum=calculatesumodd(ar, n);
    printf("product of even elements: %d\n", eproduct);
    printf("sum of odd elements: %d", osum);
}