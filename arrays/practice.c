#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int ar[n];
    int palindrome=1;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n/2;i++){
        if(ar[i]!=ar[n-i-1]){
            palindrome=0;
        }
    }
    if(palindrome==1){
        printf("palindrome");
    }
    else
    printf("not palindrome");
    return 0;
}



        




