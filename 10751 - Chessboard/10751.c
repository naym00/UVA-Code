#include<stdio.h>
#include<math.h>
int main ()
{
    double i, TestCase, N;
    scanf("%lf", &TestCase);
    for(i=1; i<=TestCase; i++)
    {
        scanf("%lf", &N);
        if(N==1)
            printf("0.000\n");
        else
            printf("%0.3lf\n", N*N+(sqrt(2)-1)*(N-2)*(N-2));
    }
    return 0;
}
