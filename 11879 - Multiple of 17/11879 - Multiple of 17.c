#include<stdio.h>
#include<string.h>
int main()
{
    int Sum, Remainder, Length, i;
    char Number[1000];
    while(gets(Number))
    {
        Remainder=0;
        Length=strlen(Number);
        if(Length==1 && Number[0]=='0')
            break;
        for(i=0; i<Length; i++)
        {
            Sum=Remainder*10+(Number[i]-'0');
            Remainder=Sum%17;
        }
        if(Remainder==0)
            printf("1\n");
        else
            printf("0\n");
    }
}
