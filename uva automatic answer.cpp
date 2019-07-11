#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,i,j,k,c=0,d,e,f;

    cin>>t;

    while(t--)
    {
        cin>>n;
        i=(((((n*567)/9)+7492)*235)/47)-498;

        j=(i/10)%10;

        if(i<0)
        cout<<-1*j<<endl;
        else
            cout<<j<<endl;
    }


    return 0;

}
