#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,p,q,a[10000],sum=0;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];

    }
    cin>>p>>q;

    cout<<n+sum-(p+q)<<endl;



}
