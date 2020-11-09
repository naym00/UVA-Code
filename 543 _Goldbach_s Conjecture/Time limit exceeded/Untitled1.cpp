#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int Num;
    cin>>Num;
    while(Num!=0)
    {
        int Array[Num+1], i;
        Array[0]=0;
        Array[1]=0;
        for(int i=2; i<Num+1; i++)
            Array[i]=1;

        for(i=2; i<=sqrt(Num); i++)
        {
            for(int j=2; i*j<=Num; j++)
                Array[i*j]=0;
        }

        for(i=3; i<(Num+1)/2; i=i+2)
        {
            if(Array[i] && Array[Num-i])
            {
                cout<<Num<<" = "<<i<<" + "<<Num-i<<endl;
                break;
            }
        }
        if(i>Num+1)
            cout<<"Goldbach's conjecture is wrong."<<endl;
        cin>>Num;
    }

    return 0;
}
