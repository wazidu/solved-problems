#include<bits/stdc++.h>
using namespace std;
long long int a[1000000];
int main()
{
    long long int i=0,j,k,v,l,m,n,o,c,p;

    while(cin>>n>>m)
    {
        for(i=1;i<=m;i++)
        cin>>a[i];

    c=0;l=0;
    p=-10000000000;

    for(i=1;i<=m;i++)
    {
        c=n/a[i];
        v=c*a[i];
        if(v>=p)
        {
            p=v;
            l=i;
            k=c;
        }
    }
    cout<<l<<" "<<k<<endl;
}
}
