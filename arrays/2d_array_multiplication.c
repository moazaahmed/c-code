#include<stdio.h>
int main(){
    int m,n,i,j,k;
    scanf("%d%d",&m,&n);
    int ar1[m][n];
    int ar2[m][n];
    int ar3[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&ar1[i][j]);
    }
}
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&ar2[i][j]);
    }
}
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            ar3[i][j]=0;
            for(k=0;k<n;k++){
                ar3[i][j]+=ar1[i][k]* ar2[k][j];
            }
        }
    }
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    printf("%d", ar3[i][j]);
                }
                printf("\n");
            }
}
    