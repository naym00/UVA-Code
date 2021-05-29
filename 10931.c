#include<stdio.h>
#include<math.h>
double twoPower[31]={1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824};
typedef struct _Node
{
    char character;
    struct _Node *next;
} Node;
Node *head=NULL;
Node *last=NULL;
void insertCharacter(char ch)
{
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->character=ch;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        last=newNode;
    }
    else
    {
        last->next=newNode;
        last=newNode;
    }
}
void Print()
{
    Node *print=head;
    if(print!=NULL)
    {
        while(print!=NULL)
        {
            printf("%c", print->character);
            print=print->next;
        }
    }
}
int main()
{
    double number, copyNumber;
    int i, oneCounter;
    while(scanf("%lf", &number)!=EOF)
    {
        oneCounter=0;
        copyNumber=0;
        if(number==0)
        {
            break;
        }
        for(i=log(number)/log(2); i>=0; i--)
        {
            if(copyNumber+twoPower[i]<=number)
            {
                copyNumber += twoPower[i];
                insertCharacter('1');
                oneCounter++;
            }
            else
            {
                insertCharacter('0');
            }
        }
        printf("The parity of ");
        Print();
        printf(" is %d (mod 2).\n", oneCounter);
        head=NULL;
    }
    return 0;
}
