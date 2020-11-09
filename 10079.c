#include<stdio.h>
int main ()
{
    long long int Lines;
    while(scanf("%lld", &Lines))
    {
        if(Lines>=0)
            printf("%lld\n", ((Lines*(Lines+1))/2)+1);
        else
            break;
    }
    return 0;
}
