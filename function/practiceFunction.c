#include<stdio.h>
int calculatemaxrow(int m,int n,int ar[m][n]){
    int maxsum;
    int row;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=ar[i][j];
        }
    if(sum>maxsum){
        maxsum=sum;
        row=i;
    }
}
return row;
}
int main(){
    int i,j,m,n;
    scanf("%d%d",&m,&n);
    int ar[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int maxrow=calculatemaxrow(m,n,ar);
    printf("max row is: %d\n",maxrow+1);
    printf("the row is: ");
    for(j=0;j<n;j++){
        printf("%d ",ar[maxrow][j]);
    }
}
