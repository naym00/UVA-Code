#include<stdio.h>
long long int nCr(long long int n, long long int r)
{
    long long int i, j, k, result=1;
    if(n-r>r)
        k=n-r;
    else
        k=r;
    for(i=k+1, j=1; i<=n; i++, j++)
        result=(i*result)/j;
    return (long long int)ceil((double)result);
}
int main ()
{
    long long int i, x, Rejected;
    while(scanf("%lld", &x))
    {
        if(x<3)
            break;
        Rejected=0;
        for(i=x-2; i>0; i-=2)
            Rejected=Rejected+(i*(i+1))/2;
        printf("%lld\n", nCr(x, 3)-Rejected);
    }
    return 0;
}
