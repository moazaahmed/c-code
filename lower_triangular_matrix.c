#include<stdio.h>
int main(){
    int i,j;
    int m,n;
    printf("enter numbers of rows and columns: ");
    scanf("%d%d",&m,&n);
    int ar[m][n];
    printf("matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    printf("lower triangular matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        if(j<=i){
            printf("%d ",ar[i][j]);
        }
        else
        printf(" ");
    }
}
        return 0;
}