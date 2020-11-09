#include<stdio.h>
int main ()
{
    int i, TestCase, CDay, CMonth, CYear, BDay, BMonth, BYear, RDay, RMonth, RYear;
    scanf("%d", &TestCase);
    for(i=1; i<=TestCase; i++)
    {
        scanf("%d/%d/%d", &CDay, &CMonth, &CYear);
        scanf("%d/%d/%d", &BDay, &BMonth, &BYear);
        if(CDay<BDay)
        {
            RDay=(CDay+30)-BDay;
            CMonth--;
            if(CMonth<BMonth)
            {
                RMonth=(CMonth+12)-BMonth;
                RYear=CYear-BYear-1;
            }
            else
            {
                RMonth=CMonth-BMonth;
                RYear=CYear-BYear;
            }
        }
        else
        {
            RDay=CDay-BDay;
            if(CMonth<BMonth)
            {
                RMonth=(CMonth+12)-BMonth;
                RYear=CYear-BYear-1;
            }
            else
            {
                RMonth=CMonth-BMonth;
                RYear=CYear-BYear;
            }
        }
        if(RYear<0)
            printf("Case #%d: Invalid birth date\n", i);
        else if(RYear>130)
            printf("Case #%d: Check birth date\n", i);
        else
            printf("Case #%d: %d\n", i, RYear);

    }
    return 0;
}
