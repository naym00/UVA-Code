#include<stdio.h>
#include<string.h>
int main ()
{
    char Number[1005];
    int Sum, i;
    while(scanf("%s", Number))
    {
        if(strcmp(Number, "0")!=0)
        {
            Sum=Number[0]-'0';
            i=1;
            while(Number[i]!='\0')
            {
                if(i%2==0)
                    Sum=Sum+(Number[i]-'0');
                else
                    Sum=Sum-(Number[i]-'0');
                i++;
            }
            if(Sum==0 || Sum%11==0)
                printf("%s is a multiple of 11.\n", Number);
            else
                printf("%s is not a multiple of 11.\n", Number);
        }
        else
            break;
    }
    return 0;
}
