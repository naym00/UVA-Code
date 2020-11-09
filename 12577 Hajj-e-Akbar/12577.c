#include<stdio.h>
#include<string.h>
int main ()
{
    char Input[20];
    int i=1;
    scanf("%s", Input);
    while(Input[0] != '*')
    {
        if(strcmp(Input, "Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n", i);
        else
            printf("Case %d: Hajj-e-Asghar\n", i);
        i++;
        scanf("%s", Input);
    }
    return 0;
}
