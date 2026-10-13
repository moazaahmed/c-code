#include<stdio.h>
int main(){
    int i;
    int ar[9]={2,6,2,0,1,3,5,1,2};
    int j;
    int temp;
    for(i=0;i<9;i++){
        for(j=8;j>i;j--){
        if(ar[j]<ar[j-1]){
            temp=ar[j];
            ar[j]=ar[j-1];
            ar[j-1]=temp;
        }
    }
}
for(j=0;j<9;j++){
    printf("%d ", ar[j]);
}
}