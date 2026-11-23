#include<stdio.h>
int main(){
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int ar1[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar1[i][j]);
        }
    }
    int flag=0;
    if(m==n){
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(ar1[i][j]!=ar1[j][i]){
            flag=1;
            break;
        }
    }
}
    }
    else{
    flag=1;
    }
    if(flag==0){
        printf("symmetry");
    }
    else
    printf("not symmetry");
}