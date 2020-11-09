#include<stdio.h>
int main ()
{
    double i, TestCase, Taka, Tax;
    scanf("%lf", &TestCase);
    for(i=1; i<=TestCase; i++)
    {
        scanf("%lf", &Taka);
        if(Taka<=180000)
            printf("Case %lld: 0\n", (long long int)i);
        else
        {
            Taka=Taka-180000;

            if(Taka>300000)
            {
                Taka=Taka-300000;


                if(Taka>400000)
                {
                    Taka=Taka-400000;
                    if(Taka>300000)
                    {
                        Taka=Taka-300000;
                        Tax=0.1*300000+0.15*400000+0.2*300000+0.25*Taka;
                        printf("Case %lld: %lld\n", (long long int)i, (long long int)ceil(Tax));
                    }
                    else
                    {
                        Tax=0.1*300000+0.15*400000+0.2*Taka;
                        printf("Case %lld: %lld\n", (long long int)i, (long long int)ceil(Tax));
                    }
                }
                else
                {
                   Tax=0.1*300000+0.15*Taka;
                   printf("Case %lld: %lld\n", (long long int)i, (long long int)ceil(Tax));
                }
            }
            else
            {
                Tax=0.1*Taka;
                if(Tax<=2000)
                    printf("Case %lld: 2000\n", (long long int)i);
                else
                {
                    printf("Case %lld: %lld\n", (long long int)i, (long long int)ceil(Tax));
                }
            }
        }
    }
    return 0;
}
