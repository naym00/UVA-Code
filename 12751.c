#include<stdio.h>
int main ()
{
    long long int i, N, K, X, TestCase;
    for(scanf("%lld", &TestCase), i=1; i<=TestCase && scanf("%lld%lld%lld", &N, &K, &X); i++)
        printf("Case %lld: %lld\n", i, (N*N-K*K-2*K*X+N+K)/2);
    return 0;
}
