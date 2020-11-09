#include<stdio.h>
int main ()
{
    int i, j, k, Number, Increment;
    char S1[105], S2[105];
    while(scanf("%d", &Number)==1)
    {
        if(Number==0)
            break;
        scanf("%s", S1);
        Increment=strlen(S1)/Number;
        for(i=Increment-1, k=0; i<strlen(S1); i+=Increment)
            for(j=i; j>=i-Increment+1; j--, k++)
                S2[k]=S1[j];
        S2[k]='\0';
        printf("%s\n", S2);
    }
    return 0;
}
