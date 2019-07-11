#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,n,i=0,j,k,c=0;

    while(cin>>r>>n && r>0 &&n>0)
    {
        i++;
        j=(r-1)/n;

        if(j>26)
        {cout<<"Case "<<i<<": impossible"<<endl;

        }
        else
            cout<<"Case "<<i<<": "<<j<<endl;
    }



    return 0;


}
