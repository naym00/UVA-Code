#include<stdio.h>
int main ()
{
    int Degree;
    while(scanf("%d", &Degree)!=EOF)
    {
        if(Degree>=0 && Degree<=180)
        {
            if(Degree%6)
                printf("N\n");
            else
                printf("Y\n");
        }
    }
    return 0;
}
