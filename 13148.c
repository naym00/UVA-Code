#include<stdio.h>
long long int Array[]= {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
                        1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
                        47045881, 64000000, 85766121
                       };
long long int Binary(long long int FirstIndex, long long int LastIndex, long long int Key)
{
    long long int MiddelIndex;
    while(FirstIndex<=LastIndex)
    {
        MiddelIndex=(FirstIndex+LastIndex)>>1;
        if(Array[MiddelIndex]==Key)
        {
            return 1;
            break;
        }
        else if(Array[MiddelIndex]>Key)
            LastIndex=MiddelIndex-1;
        else if(Array[MiddelIndex]<Key)
            FirstIndex=MiddelIndex+1;
    }
    if(FirstIndex>LastIndex)
        return 0;
}
int main ()
{
    long long int Number;
    while(scanf("%lld", &Number))
    {
        if(Number==0)
            break;
        if(Binary(0, 20, Number))
            printf("Special\n");
        else
            printf("Ordinary\n");
    }
    return 0;
}
