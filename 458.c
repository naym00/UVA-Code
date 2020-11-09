#include<stdio.h>
int main ()
{
    char s;
    for(;scanf("%c", &s)!=EOF;)
    {
        if(s=='\n')
            printf("\n");
        else
            printf("%c", s-7);
    }
    return 0;
}
