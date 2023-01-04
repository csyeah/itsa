<<<<<<< HEAD
#include<stdio.h>

int priority
=======
#include<stdio.h>
#include<ctype.h>
char stack[1000], top = -1;

int is_empty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}
int is_full()
{
    if (top == 999)
        return 1;
    else
        return 0;
}
char pop()
{
        return stack[top--];
}
void push(char new_data)
{
    
        stack[++top] = new_data;
}
int priority(char a)
{
    if (a == '(')
        return 0;
    else if (a == '+' || a == '-')
        return 1;
    else if (a == '*' || a == '/')
        return 2;
    return 0;
    
}
int main()
{
    int num_line;
    
    scanf("%d", &num_line);
    char line[num_line][100], ch;
    while((ch = getchar()) != '\n' && ch != EOF);
    for (int i = 0; i < 4; i++)
        fgets(line[i], 100, stdin);
    for (int i = 0; i < num_line; i++)
    {
        top = -1;
        int j = 0;
        while (line[i][j] != '\n')
        {
            if (isspace(line[i][j]));
            else if (isalnum(line[i][j]))
                printf("%c ", line[i][j]);
            else if (line[i][j] == '(')
                push(line[i][j]);
            else if (line[i][j] == ')')
            {
                char a;
                while ((a = pop()) != '(')
                    printf("%c ", a);
            }
            else 
            {
                while (priority(stack[top]) >= priority(line[i][j]))
                    printf("%c ", pop());
                push(line[i][j]);
            }
            j++;
        }
        while (top != -1)
            printf("%c ", pop());
        puts("");
    }
    
    
    return 0;
    
}
>>>>>>> e6a47ce (new)
