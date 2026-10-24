#include<stdio.h>
int main(){
    int i;
    int ar1[3]={2,6,2};
    int ar2[6]={0,1,3,5,1,2};
    int ar3[9];
    for(i=0;i<3;i++){
        ar3[i]=ar1[i];
    }
    for(i=0;i<6;i++){
        ar3[3+i]=ar2[i];
    }
    for(i=0;i<9;i++){
        printf("%d ",ar3[i]);
    }
    return 0;
}




