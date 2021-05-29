#include<stdio.h>
int main()
{
    long long int i, testCase, number, calculatedValue, remainderOf100;
    scanf("%lld", &testCase);
    for(i=1; i<=testCase; i++)
    {
        scanf("%lld", &number);
        calculatedValue=315*number+36962;
        if(calculatedValue<0)
        {
            calculatedValue=calculatedValue*(-1);
        }
        remainderOf100=calculatedValue%100;
        printf("%lld\n", (remainderOf100-remainderOf100%10)/10);
    }
    return 0;
}
