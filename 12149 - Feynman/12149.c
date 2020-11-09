#include<stdio.h>
#define ONE(Number) scanf("%d", &Number);
#define TWO if(Number==0) break;
#define THREE (Number*(Number+1)*((2*Number)+1))/6
int main ()
{
    int Number;
    while(1)
    {
        ONE(Number) TWO
        printf("%d\n", THREE);
    }

    return 0;
}
