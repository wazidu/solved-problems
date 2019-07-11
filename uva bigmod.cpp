#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
long F(long b, long p, long m)
{
    if(p==0)
        return 1;
    if(p%2==0)
    return (F(b,p/2,m)*F(b,p/2,m))%m;
    else
    return (F(b,p-1,m)*(b%m))%m;
}

int main()
{
    long b,p,m;
    while(cin>>b>>p>>m)
    {
        cout<<F(b,p,m)<<endl;
    }

return 0;
}
