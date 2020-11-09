#include<stdio.h>
#include<string.h>
int main ()
{
    char Number[1005], CopyOfNumber[1005];
    int Sum, TemporarySum, Degree, i;
    while(scanf("%s", Number))
    {
        if(strcmp(Number, "0")!=0)
        {
            strcpy(CopyOfNumber, Number);
            Degree=Sum=i=0;
            while(Number[i]!='\0')
            {
                Sum=Sum+(Number[i]-'0');
                i++;
            }
            Degree++;
            if(Sum%9!=0)
                printf("%s is not a multiple of 9.\n", CopyOfNumber);
            else
            {
                if(Sum==9)
                    printf("%s is a multiple of 9 and has 9-degree %d.\n", CopyOfNumber, Degree);
                else
                {
                    while(1)
                    {
                        TemporarySum=0;
                        while(Sum!=0)
                        {
                            TemporarySum=TemporarySum+Sum%10;
                            Sum=Sum/10;
                        }
                        Degree++;
                        Sum=TemporarySum;
                        if(Sum==9)
                        {
                            printf("%s is a multiple of 9 and has 9-degree %d.\n", CopyOfNumber, Degree);
                            break;
                        }
                    }
                }
            }
        }
        else
            break;
    }
    return 0;
}
