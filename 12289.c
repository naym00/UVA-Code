#include<stdio.h>
int main ()
{
    int i, TestCase;
    char Something[6];
    for(i=1, scanf("%d", &TestCase); i<=TestCase; i++)
    {
        scanf("%s", Something);
        if(strlen(Something)==5)
            printf("3\n");
        else
        {
            if((Something[0]=='t'&&Something[1]=='w') || (Something[1]=='w'&&Something[2]=='o') || (Something[2]=='o'&&Something[0]=='t'))
                printf("2\n");
            else
                printf("1\n");
        }
    }
    return 0;
}
