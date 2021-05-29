#include<stdio.h>
#include<math.h>
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
void Calculations()
{
    double number=0, multiplier=10, delxy, xCoordinade=0, yCoordinade=0;
    Node *forCal=head;
    if(forCal!=NULL)
    {
        while(forCal!=NULL)
        {
            if(forCal->character >= '0' && forCal->character <= '9')
            {
                number=number*multiplier + (forCal->character-'0');
            }
            else if(forCal->character == 'N' || forCal->character == 'S' || forCal->character == 'E' || forCal->character == 'W')
            {
                if(forCal->character=='N' && forCal->next->character=='E')
                {
                    delxy=sqrt((number*number)/2);
                    xCoordinade += delxy;
                    yCoordinade += delxy;
                    forCal=forCal->next;
                }
                else if(forCal->character=='S' && forCal->next->character=='E')
                {
                    delxy=sqrt((number*number)/2);
                    xCoordinade += delxy;
                    yCoordinade -= delxy;
                    forCal=forCal->next;
                }
                else if(forCal->character=='S' && forCal->next->character=='W')
                {
                    delxy=sqrt((number*number)/2);
                    xCoordinade -= delxy;
                    yCoordinade -= delxy;
                    forCal=forCal->next;
                }
                else if(forCal->character=='N' && forCal->next->character=='W')
                {
                    delxy=sqrt((number*number)/2);
                    xCoordinade -= delxy;
                    yCoordinade += delxy;
                    forCal=forCal->next;
                }
                else
                {
                    if(forCal->character=='N')
                    {
                        yCoordinade += number;
                    }
                    else if(forCal->character=='S')
                    {
                        yCoordinade -= number;
                    }
                    else if(forCal->character=='E')
                    {
                        xCoordinade += number;
                    }
                    else if(forCal->character=='W')
                    {
                        xCoordinade -= number;
                    }
                }
                number=0;
            }
            forCal=forCal->next;
        }
        printf("The treasure is located at (%0.3lf,%0.3lf).\n", xCoordinade, yCoordinade);
        printf("The distance to the treasure is %0.3lf.\n\n", sqrt(xCoordinade*xCoordinade + yCoordinade*yCoordinade));
    }
}
int main()
{
    int map;
    char ch;
    for(map=1; ; map++)
    {
        while(scanf("%c", &ch))
        {
            if(ch=='\n')
            {
                break;
            }
            insertCharacter(ch);
        }
        if(head->character=='E' && head->next->character=='N' && head->next->next->character=='D')
        {
            break;
        }
        printf("Map #%d\n", map);
        Calculations();
        head=NULL;
    }
    return 0;
}
