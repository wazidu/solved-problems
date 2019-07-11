#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);

    long long int i,j,k,c,a,vn,b,v,n,m,sum=0,p,q,r,l;

    while(cin>>n>>m)
    {
        if(m==1)
        {
            p=n*(n-1)/2;

            cout<<p<<" "<<p<<endl;
        }

        else
        {
            c=n/m;
           // cout<<c<<endl;
            j=n%m;
            //cout<<j<<endl;
            r=j*((c+1)*(c)/2);
            r=r+(m-j)*(c*(c-1)/2);
            //cout<<b<<endl;
            //cout<<m<<endl;
            l=(n-(m-1));
            l=l*(l-1)/2;

            cout<<r<<" "<<l<<endl;
        }
    }
}
