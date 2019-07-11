#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.sync_with_stdio(false);
    long long int i,j,k,k2,n,a,b,c,sum=0;

    cin>>n>>a>>b>>c;

    k=min(a,b);
    k2=min(k,c);

    if(n>1)
    {
        sum=sum+k;
        for(i=2;i<n;i++)
            sum=sum+k2;
    }
cout<<sum<<endl;

}
