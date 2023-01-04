#include<stdio.h>
int main()
{
    char line[4][100];
    for (int i = 0; i < 4; i++)
    {
        fgets(line[i], 100, stdin);
    }
    for (int i = 0; i < 4; i++)
        printf("%s\n", line[i]);
    
}