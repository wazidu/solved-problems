#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[309][309];
vector<ll>vc[309];
ll bb[309],cc[309];


ll dp(ll n,ll m)
{

}


int main()
{
    ll n,m,c,v,b,i,j,k,l;
    while(cin>>n>>m)
    {
        for(i=0; i<=309; i++)
        {
            vc[i].empty();

        }
        for(i=0; i<m; i++)
        {
            cin>>k>>l>>c;
            bb[i]=k;
            cc[i]=l;
            a[k][l]=c;
            a[l][k]=c;
            vc[k].push_back(l);
            vc[l].push_back(k);
        }
        c=0;
        for(i=0; i<m; i++)
        {
                c+=dp(bb[i],cc[i]);
        }

    }
}

