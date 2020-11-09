#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main ()
{
    int TestCase;
    cin>>TestCase;
    if(TestCase<=100)
    {
        for(int i=1; i<=TestCase; i++)
        {
            double Length;
            cin>>Length;
            if(Length<=1000)
                printf("%0.2lf %0.2lf\n", (M_PI*Length*Length)/25, ((Length*Length)*(15-M_PI))/25);
        }

    }
    return 0;
}
