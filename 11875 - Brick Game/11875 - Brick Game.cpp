#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main ()
{
    int TestCase, People, Age, FirstAge, C1, C2;
    cin>>TestCase;
    if(TestCase<=100)
    {
        for(int i=1; i<=TestCase; i++)
        {
            C1=0;
            C2=0;
            cin>>People;
            vector<int>Ages;
            for(int j=0; j<People; j++)
            {
                cin>>Age;
                if(Age>=11 && Age<=20)
                    Ages.push_back(Age);

                if(j==0)
                    FirstAge=Age;
                else
                {
                    if(FirstAge>Age &&C1==0)
                    {
                        FirstAge=Age;
                        C2++;
                    }
                    else if(FirstAge<Age &&C2==0)
                    {
                        FirstAge=Age;
                        C1++;
                    }
                }
            }
            if((C1==(People-1) || C2==(People-1)) && ((People&1) &&(People>1 && People<11)))
            {
                sort(Ages.begin(), Ages.end());
                cout<<"Case "<<i<<": "<<Ages[People/2]<<endl;
            }
        }
    }

    return 0;
}


