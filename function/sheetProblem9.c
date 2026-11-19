#include<stdio.h>
int modifiedarray(int m,int n,int ar[m][n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((i+1)%2==0){
                ar[i][j]=ar[i][j]*3;
            }
                else{
                    ar[i][j]=ar[i][j]*2;
                }
            }
        }
    }
    int main(){
        int i,m,n,j;
        scanf("%d%d",&m,&n);
        int ar[m][n];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&ar[i][j]);
            }
        }
        modifiedarray(m,n,ar);
        printf("after modification:");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d ",ar[i][j]);
            }
        }
    }