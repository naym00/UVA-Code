#include<stdio.h>
#include<math.h>
int main ()
{
    double SP, Day;
    while(scanf("%lf %lf", &SP, &Day)!=EOF)
    {
        printf("%lld\n", (long long int)SP+(long long int)ceil((1-2*SP+sqrt(((2*SP-1)*(2*SP-1))+8*Day))/2)-1);
    }
    return 0;
}
