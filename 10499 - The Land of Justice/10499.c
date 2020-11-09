#include<stdio.h>
int main ()
{
    long long int N;
    while(scanf("%lld", &N)!=EOF)
    {
        if(N==1)
            printf("0%%\n");
        else if(N>=0)
            printf("%lld%%\n", 50+(N-2)*25);
        else
            break;
    }
    return 0;
}
