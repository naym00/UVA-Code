#include<stdio.h>
int main ()
{
    long long int Total, limit, Result, i=1;
    while(scanf("%lld", &Total))
    {
        if(Total==0)
            break;
        Result=0;
        limit=1;
        while(((long long int)ceil((double)(Total-limit)/2)-1)>limit)
        {
            Result=Result+((long long int)ceil((double)(Total-limit)/2)-1)-limit;
            limit++;
        }
        printf("Case %lld: %lld\n", i, Result);
        i++;
    }
    return 0;
}
