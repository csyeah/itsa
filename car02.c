#include<stdio.h>
int main()
{
    int num[6];
    for (int i = 0;i < 6; i++)
        scanf("%d", &num[i]);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[5-i]);
    }
    printf("%d\n", num[0]);
    
    return 0;
}