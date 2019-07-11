#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,a[10000];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[a[a[a[i]]]]==a[i])
        {
             cout<<"YES"<<endl;
             return 0;
        }

    }
    cout<<"NO"<<endl;

    return 0;
}
