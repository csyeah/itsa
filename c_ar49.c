#include<stdio.h>
#include<string.h>
int main()
{
    //number 48 - 57 upper 65 90 lower 97 122
    char line[101];
    int count;
    fgets(line, 100, stdin);
    scanf("%d", &count);
    int line_length = strlen(line);
    for (int i = 0; i < line_length; i++)
    {
        //num
        if (line[i] >= 48 && line[i] <= 57)
        {
            if (line[i] + count > 57 )
            {
                int move = line[i] + count - 57;
                line[i] = 47 + move;
            }
            else 
                line[i] = line[i] + count;
        }
        //upper
        else if (line[i] >= 65 && line[i] <= 90)
        {
            if (line[i] + count > 90)
            {
                int move = line[i] + count - 90;
                line[i] = 64 + move;
            }
            else
                line[i] = line[i] + count;    
        }
        //lower
        else if (line[i] >= 97 && line[i] <= 122)
        {
            if (line[i] + count > 122)
            {
                int move = line[i] + count - 122;
                line[i] = 96 + move;
            }
            else
                line[i] = line[i] + count;
        }
        printf("%c", line[i]);
    }
    
}