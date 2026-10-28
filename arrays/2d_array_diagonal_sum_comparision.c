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
    int primary_sum=0;
    printf("primary diagonal: ");
    for(i=0;i<m && i<n;i++){
            printf("%d ", ar1[i][i]);
             primary_sum+=ar1[i][i];
        }
        printf("\nsum: %d\n", primary_sum);
        int secondary_sum=0;
    printf("secondry diagonal: ");
    for(i=0;i<m && i<n;i++){
            printf("%d ", ar1[i][n-i-1]);
             secondary_sum+=ar1[i][n-i-1];
        }
        printf("\nsum: %d\n", secondary_sum);
        if(primary_sum > secondary_sum){
            printf("primary diagonal sum is greater");
        }
        else if(secondary_sum == primary_sum){
            printf("equal");
        }
        else{
            printf("secondary diagonal sum is greater");
        }
        return 0;
}