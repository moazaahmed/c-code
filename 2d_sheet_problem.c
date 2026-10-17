#include<stdio.h>
int main (){
    int i,j;
    int m,n;
    printf("enter number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("the arrays is: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
    int k;
    printf("enter the element you want to search: ");
    scanf("%d",&k);
    int count=0;
    int flag=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==k){
                count++;
                flag=1;
            }
        }
    }
        if(flag==1){
            printf("%d is present %d times",k,count);
        }
        else{
            printf("%d is not preset",k);
        }
    return 0;
}