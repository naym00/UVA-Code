#include<stdio.h>
#include<math.h>
int main()
{
    long long int number, row, column, celingNumber, lowerPoint, upperPoint, midPoint;
    while(1)
    {
        scanf("%lld", &number);
        if(number==0)
        {
            break;
        }
        celingNumber=ceil(sqrt(number));
        upperPoint=celingNumber*celingNumber;
        lowerPoint=(celingNumber-1)*(celingNumber-1)+1;
        midPoint=(lowerPoint+upperPoint)>>1;
        if(celingNumber&1==1)
        {
            if(number<=midPoint)
            {
                row=celingNumber;
                column=number-lowerPoint+1;
            }
            else
            {
                row=upperPoint-number+1;
                column=celingNumber;
            }
        }
        else
        {
            if(number>=midPoint)
            {
                row=celingNumber;
                column=upperPoint-number+1;
            }
            else
            {
                row=number-lowerPoint+1;
                column=celingNumber;
            }
        }
        printf("%lld %lld\n", row, column);
    }
    return 0;
}
