#include <stdio.h>
int main()
{
    int i;
    int ar[9] = {2, 6, 2, 0, 1, 3, 5, 1, 2};
    int flag = 0;
    int key;
    int count = 0;
    printf("enter number you wanna search: ");
    scanf("%d", &key);
    for (i = 0; i < 9; i++)
    {
        if (ar[i] == key){
            flag = 1;
        count++;
        }
    }
    if (flag == 1)
        printf("present %d times", count);
    else
        printf("not prsent");
    return 0;
}