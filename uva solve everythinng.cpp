#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a[1000],c=0,d,j=0;

    cin>>t;

    while(t--)
    {
        j++;
        c=0;
        int p=13;
        while(p--)
        {
            cin>>d;
            if(d==0)
                c++;
        }

        if(c==0)
            cout<<"Set #"<<j<<": "<<"Yes"<<endl;
        else
             cout<<"Set #"<<j<<": "<<"No"<<endl;
    }
    return 0;
}
