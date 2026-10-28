#include<stdio.h>
int main(){
  int m,n;
  int i,j;
  int positive=0;
  int negative=0;
  int zero=0;
  printf("enter rows and columns: ");
  scanf("%d%d",&m,&n);
  int ar[m][n];
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&ar[i][j]);
    }
  }for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      if(ar[i][j]<0){
        printf("%d is negative element\n",ar[i][j]);
        negative++;
      }
      else if(ar[i][j]==0){
        printf("%d is zero element\n",ar[i][j]);
        zero++;
      }

      
      else{
        printf("%d is positive element\n",ar[i][j]);
        positive++;
      }
}
  }
  printf("total positive element:%d\n", positive);
  printf("total negative element:%d\n", negative);
  printf("total zero element:%d\n", zero);
  return 0;
}