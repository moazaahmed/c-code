#include<stdio.h>
void recall(char name[1000], int age){
     printf("my name is %s\n", name);
      printf("iam %d years old",age);

}
int main(){
    char name[1000];
    printf("enter your name: ");
    fgets(name,1000,stdin);
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    int i;
    int len=0;
    for(i=0;name[i]!='n' && name[i]!='\0';i++){
        len++;
    }

    recall(name, age);
    return 0;
}
