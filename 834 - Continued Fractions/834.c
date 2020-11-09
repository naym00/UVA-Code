#include<stdio.h>
int main ()
{
    int A, B, b, Tem, C;

    while(scanf("%d%d", &A, &B)!=EOF)
    {
        printf("[");
        C=0;
        while((A/B)*B!=A)
        {
            b=(A-1)/B;
            printf("%d", b);
            if(C==0)
                printf(";");
            else
                printf(",");
            Tem=A;
            A=B;
            B=Tem-b*B;
            C++;
        }
        printf("%d]\n", A/B);
    }
    return 0;
}
