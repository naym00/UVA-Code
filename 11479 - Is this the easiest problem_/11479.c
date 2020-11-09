#include<stdio.h>
int main ()
{
    int TestCase, i;
    long long int A, B, C;
    scanf("%d", &TestCase);
    if(TestCase<20)
    {
        for(i=1; i<=TestCase; i++)
        {
            scanf("%lld%lld%lld", &A, &B, &C);
            if((A+B)>C && (B+C)>A && (C+A)>B)
            {
                if(A==B && A==C && C==B)
                    printf("Case %d: Equilateral\n", i);
                else if(A==B || A==C || C==B)
                    printf("Case %d: Isosceles\n", i);
                else
                    printf("Case %d: Scalene\n", i);
            }
            else
                printf("Case %d: Invalid\n", i);

        }
    }
    return 0;
}
