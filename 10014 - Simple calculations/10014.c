#include<stdio.h>
struct Node
{
    double Data;
    struct Node *Next;
};
struct Node *Head=NULL;
struct Node *Last=NULL;
void Insert(double Data)
{
    struct Node *NewNode=(struct Node*)malloc(sizeof(struct Node));
    NewNode->Data=Data;
    if(Head==NULL)
    {
        Head=NewNode;
        Last=NewNode;
    }
    else
        Last->Next=NewNode;
        Last=NewNode;
}
int main ()
{
    double TestCase, i, j, N, First, Last, Sum, C;
    struct Node *X;
    scanf("%lf", &TestCase);
    for(i=1; i<=TestCase; i++)
    {
        if(i>1)
            printf("\n");
        scanf("%lf", &N);
        scanf("%lf", &First);
        scanf("%lf", &Last);
        for(j=1; j<=N; j++)
        {
            scanf("%lf", &C);
            Insert(C);
        }
        X=Head;
        C=N;
        Sum=0;
        while(C!=0)
        {
            Sum=Sum+(X->Data)*(2*C);
            X=X->Next;
            C--;
        }
        printf("%0.2lf\n", ((N*First+Last)-Sum)/(N+1));
        Head=NULL;
    }
    return 0;
}
