#include<stdio.h>
int main ()
{
    int TestCase, i, j, k, Count, Input, Tem;
    char A[100];
    scanf("%d", &TestCase);
    for(i=1; i<=TestCase; i++)
    {
        Count=0;
        scanf("%d", &Input);
        if(Input>=0 && Input<=50)
        {
            for(j=0; j<Input; j++)
                scanf("%d", &A[j]);
            for(j=0; j<Input-1; j++)
            {
                for(k=j+1; k<Input; k++)
                {
                    if(A[j]>A[k])
                    {
                        Tem=A[j];
                        A[j]=A[k];
                        A[k]=Tem;
                        Count++;

                    }
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", Count);
    }
    return 0;
}
