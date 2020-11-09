#include <bits/stdc++.h>
using namespace std;
long long int prime(int Number)
{
    int i, Return=1;
    for(i=2; i<=sqrt(Number); i++)
    {
        if(Number%i==0)
            Return=0;
    }
    return Return;
}

int main()
{
    long long int Number,First,Second;
    while(cin>>Number)
    {
        if(Number==0)
            break;

        First=3;
        while(First<Number)
        {
            Second=Number-First;
            if(prime(First) && prime(Second))
            {
                printf("%lld = %lld + %lld\n", Number, First, Second);
                break;
            }
            First=First+2;
        }
        if(First>Number)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}
