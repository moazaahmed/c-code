#include<stdio.h>
int main(){
    int n;
    int i;
    printf("number of marks: ");
    scanf("%d",&n);
    int a[n];
    printf("their mark is: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     int highest=a[0];
    int lowest=a[0];
    for(i=0;i<n;i++){
        if(a[i]> highest){
            highest=a[i];
        }
        else if(a[i]<lowest){
            lowest=a[i];
        }
    }
    printf("highest number: %d\n", highest);
    printf("lowest number: %d", lowest);
    return 0;
}