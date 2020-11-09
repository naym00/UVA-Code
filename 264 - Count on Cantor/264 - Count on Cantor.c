#include<stdio.h>
#include<math.h>
int main ()
{
    int N, L;
    while(scanf("%d", &N)!=EOF)
    {
        L=ceil((-1+sqrt(1+8*N))/2);
        if(L&1==1)
            printf("TERM %d IS %d/%d\n", N, (L*(L+1))/2-N+1, (L-L*L+2*N)/2);
        else
            printf("TERM %d IS %d/%d\n", N, (L-L*L+2*N)/2, (L*L+L-2*N+2)/2);
    }
    return 0;
}

