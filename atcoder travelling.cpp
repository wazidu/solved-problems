#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,n,a[10000];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    cout<<a[n-1]-a[0]<<endl;

    return 0;

}
