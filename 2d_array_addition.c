#include<stdio.h>
int main(){
    int i,j;
    int m,n;
    printf("enter numbers of rows and columns: ");
    scanf("%d%d",&m,&n);
    int ar1[m][n];
    int ar2[m][n];
    int ar3[m][n];
    printf("first matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar1[i][j]);
        }
    }
     printf("second matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar2[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            ar3[i][j]=ar1[i][j]+ar2[i][j];
        }
    }
    printf("after addition: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ", ar3[i][j]);
        }
    }
        return 0;
}
