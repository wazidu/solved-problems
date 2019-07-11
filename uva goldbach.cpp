//seive prime generator::

#include<bits/stdc++.h>
using namespace std;
long long int n[10000],a[10000],b[10000];
int main()
{
   long long  int t,k,m,l, i,j, c=0;

while(cin>>t && t!=0)
{
    c=0;

    memset(n,-1,sizeof(n));

    for(i=2;i<=sqrt(t);i++)
    {
        if(n[i]==-1)
        {
            for(j=2;i*j<=t;j++)
                n[i*j]=0;
        }
    }
l=0;
    for(i=2;i<=t;i++)
    {
        if(n[i]!=0)
        {
            cin>>a[l];
            //cout<<i<<endl;
            l++;
        }
    }

    for(k=0;k<l;k++)
    {
        for(m=0;m<l;m++)
        {
            if(a[k]+a[m]==t)
                c++;
        }
    }

    cout<<c<<endl;
}
    return 0;
}

