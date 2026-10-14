#include <stdio.h>
int main()
{
  int ar1[9]={2,6,2,0,1,3,5,1,2};
  int ar2[9];
  for(int i=0;i<9;i++){
    ar2[i]=ar1[i];
  }for(int i=0;i<9;i++){
    printf("%d ",ar2[i]);
  }

  return 0;

}
