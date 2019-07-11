#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,k,l,m,x,a[10000],b[10000],c=0,d=0,sum=0;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        sum=0;c=0;

        cin>>n>>k>>x;

        for(j=1;j<=n;j++)
        {
            if( j<x || j>(x+k-1))
            {
                sum=sum+j;
            }
        }

        cout<<"Case "<<i<<": "<<sum<<endl;

    }

    return 0;


}
