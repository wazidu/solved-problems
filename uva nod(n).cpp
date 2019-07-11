#include<bits/stdc++.h>
using namespace std;
long long int t,i,j,k,l=0,m,n,c=0,a,b,a1[1000001],b1[1000001],d,x;

long long int divisiors(long long int x)
{
    d=0;
    for(j=1;j<=x;j++)
    {
        if(x%j==0)
            d++;
    }
    return d;
}
int main()
{
    cin>>t;

    while(t--)
    {
        l++;
        cin>>a>>b;
        m=1;c=0;
        for(i=1;m<=b;i++)
        {
            m=m+divisiors(m);
            if(m>=a)c++;
        }
        cout<<"Case "<<l<<": "<<c<<endl;
    }

    return 0;

}
