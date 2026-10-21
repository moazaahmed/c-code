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
        int key;
        printf("enter number you want to search: ");
        scanf("%d",&key);
        int flag=0;
        int count=0;
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(ar[i][j]==key){
                flag=1;
                count++;
                printf("%d is found at row: %d and column : %d\n", key, i+1, j+1);
            }
            }
        }
        if(flag==1){
            printf("%d is present %d times!", key, count);
        }
        else
         printf("%d is not present!", key);
return 0;
}
