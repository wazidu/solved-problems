#include<bits/stdc++.h>
using namespace std;
long long int a[200001];
int main()
{
    long long int i,l=0,m=0,n;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        m=m+a[i];
    }
if(m%2==0)
    m=m/2;
else
    m=1+m/2;

    for(i=0;i<n;i++)
    {
        l=l+a[i];
        if(l>=m)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }

    return 0;
}
