#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int ar1[n],ar2[n],ar3[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar1[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&ar2[i]);
    }
    for(i=0;i<n;i++){
        ar3[i]=ar1[i] * ar2[i];
    }
    for(i=0;i<n;i++){
        printf("%d ", ar3[i]);
    }
    return 0;
}