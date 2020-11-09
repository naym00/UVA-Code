#include<stdio.h>
int main ()
{
    double i, j, k, a, b, result;
    while(scanf("%lf%lf", &a, &b))
    {
        if(a==0 && b==0)
            break;
        result=1;

        if(a-b>b)
            k=a-b;
        else
            k=b;
        for(i=k+1, j=1; i<=a; i++, j++)
        {
            result=(i*result)/j;
        }
        printf("%lld\n", (long long int)ceil(result));
    }
    return 0;
}
