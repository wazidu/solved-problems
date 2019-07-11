#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int t,i,k,c=0;

    while(cin>>t)
    {
        for(i=0;i<5;i++)
        {
            cin>>k;
            if(k==t)
                c++;
        }
        cout<<c<<endl;
        c=0;
    }
    return 0;
}
