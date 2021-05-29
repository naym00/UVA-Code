#include<stdio.h>
#include<math.h>
int main()
{
    int number, n, a, p;
    while(scanf("%d", &number), number != -1)
    {
        for(n=sqrt(2*number); n>=1; n--)
        {
            if((2*number-n*n+n)%(2*n)==0)
            {
                a=(2*number-n*n+n)/(2*n);
                p=((2*number)/n)-a;
                break;
            }
        }
        printf("%d = %d + ... + %d\n", number, a, p);
    }
    return 0;
}
