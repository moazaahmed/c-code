#include <stdio.h>
int main()
{
    int i,m,n,j;
    printf("enter number of rows: ");
    scanf("%d",&m);
     printf("enter number of rows: ");
    scanf("%d",&n);
    int ar[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    for(j=0;j<n;j++){
        int sum=0;
        int product=1;
        for(i=0;i<m;i++){
            sum+=ar[i][j];
            product*=ar[i][j];
        }

    printf("column:%d sum= %d product=%d\n", j+1, sum, product);
    }
    return 0;
}




        




