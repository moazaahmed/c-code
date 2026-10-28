#include<stdio.h>
int main(){
    int i,m,n;
    printf("enter elements of 1st array: ");
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("enter elements of 2nd array: ");
    scanf("%d",&n);
    int b[n];
     for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int c[m+n];
    for(i=0;i<m;i++){
        c[i]=a[i];
    }
    for(i=0;i<n;i++){
        c[m+i]=b[i];
    }
    for(i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}