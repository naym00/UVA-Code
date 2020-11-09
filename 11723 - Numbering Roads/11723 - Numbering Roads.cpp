#include<iostream>
#include <cmath>
using namespace std;
int main ()
{
    double R, N;
    int i=1;
    cin>>R>>N;
    while(R != 0 && N != 0)
    {
        if(ceil(R/N)-1<=26)
            cout<<"Case "<<i<<": "<<ceil(R/N)-1<<endl;
        else
            cout<<"Case "<<i<<": impossible"<<endl;

        cin>>R>>N;
        i++;
    }

    return 0;
}
