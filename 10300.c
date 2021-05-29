#include<stdio.h>
int main()
{
    long long int i, j, testCase, totalFarmer, x, y, z, amount;
    scanf("%lld", &testCase);
    for(i=1; i<=testCase; i++)
    {
        amount=0;
        scanf("%lld", &totalFarmer);
        for(j=1; j<=totalFarmer; j++)
        {
            scanf("%lld%lld%lld", &x, &y, &z);
            amount += x*z;
        }
        printf("%lld\n", amount);
    }
    return 0;
}
