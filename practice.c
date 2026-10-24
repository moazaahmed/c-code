#include<stdio.h>
int main(){
    int i;
    int ar[10]={2,6,2,0,1,3,5,1,2};
    int pos=3;
    int value=-1;
    for(i=8;i>=2;i--){
        ar[i+1]=ar[i];
    }
    ar[2]=-1;
    for(i=0;i<=9;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}




