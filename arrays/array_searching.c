#include<stdio.h>
int main(){
    int i,n;
    int flag=0;
    int position;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int elements[n];
    printf("the %d elements are: ", n);
    for(i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
    int key;
    int count=0;
    printf("enter number you want to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(elements[i]==key){
                flag=1;
                count++;

        }
    }
    if(flag==1){
        printf("%d is present %d times", key,count);
    }
    else
        printf("%d is not present", key);

    return 0;
}
