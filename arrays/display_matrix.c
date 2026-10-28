#include<stdio.h>
int main(){
 int m,n;
 printf("enter number of rows and columns: ");
 scanf("%d %d",&m,&n);
 int ar[m][n];
 printf("elements are:");
 for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    scanf("%d",&ar[i][j]);
  }
 }
 printf("result:");
 for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    printf("%d ",ar[i][j]);
  }
  printf("\n");
}
return 0;
}