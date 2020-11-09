#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int TestCase;
    cin>>TestCase;
    if(TestCase<20)
    {
        for(int i=1; i<=TestCase; i++)
        {
            int Salary[3];
            for(int j=0; j<3; j++)
                cin>>Salary[j];
            if((Salary[0]>=1000 && Salary[0]<=10000)&&(Salary[1]>=1000 && Salary[1]<=10000)&&(Salary[2]>=1000 && Salary[2]<=10000))
            {
                sort(Salary, Salary+3);
                cout<<"Case "<<i<<": "<<Salary[1]<<endl;
            }
        }
    }
    return 0;
}
