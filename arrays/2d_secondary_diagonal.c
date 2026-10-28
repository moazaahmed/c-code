#include<stdio.h>
int main(){
    int i,j;
    int m,n;
    printf("enter numbers of rows and columns: ");
    scanf("%d%d",&m,&n);
    int ar1[m][n];
    printf("matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar1[i][j]);
        }
    }
    int sum=0;
    printf("secondry diagonal: ");
    for(i=0;i<m && i<n;i++){
            printf("%d ", ar1[i][n-i-1]);
             sum+=ar1[i][n-i-1];

        }
        printf("\nsum: %d", sum);
        return 0;
}