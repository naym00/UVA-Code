#include<stdio.h>
#include<string.h>
int main ()
{
    int TeastCase, i, j, k, ThirdHand, Index;
    char A[200], B[200], Sum[200];
    scanf("%d", &TeastCase);
    for(i=1; i<=TeastCase; i++)
    {
        scanf("%s%s", A, B);
        ThirdHand=0;

        for(j=0; j<strlen(A)&&j<strlen(B); j++)
        {
            Sum[j]=((((A[j]-'0')+(B[j]-'0'))+ThirdHand)%10)+'0';
            ThirdHand=((A[j]-'0')+(B[j]-'0')+ThirdHand)/10;
        }
        if(strlen(A)>j)
        {
            while(A[j]!='\0')
            {
                Sum[j]=(((A[j]-'0')+ThirdHand)%10)+'0';
                ThirdHand=((A[j]-'0')+ThirdHand)/10;
                j++;
            }
        }
        if(strlen(B)>j)
        {
            while(B[j]!='\0')
            {
                Sum[j]=(((B[j]-'0')+ThirdHand)%10)+'0';
                ThirdHand=((B[j]-'0')+ThirdHand)/10;
                j++;
            }
        }
        if(ThirdHand>0)
        {
            Sum[j]=ThirdHand+'0';
            Sum[j+1]='\0';
        }
        else
            Sum[j]='\0';

        Index=0;

        for(j=0; j<strlen(Sum); j++)
        {
            if(Sum[j]!='0')
                break;
            Index++;
        }
        for(j=Index, k=0; j<strlen(Sum); j++, k++)
        {
            Sum[k]=Sum[j];
        }
        Sum[k]='\0';
        printf("%s\n", Sum);

    }

    return 0;
}
