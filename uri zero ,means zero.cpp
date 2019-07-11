#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100000];
int main()
{
    ll i,j,k,l,c,v,b,n,m;
    string s,s1,s2;
cin.sync_with_stdio(false);
    while(cin>>n)
    {
        cin>>k>>v;
        c=0;
        for(i=0;i<n-k;i++)
        {
            cin>>a[i];
            c+=a[i];
        }
        for(i;i<n;i++)
        {
            cin>>a[i];
            c+=v;
        }
        cout<<c<<endl;


    }

}
