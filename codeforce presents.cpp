#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(0),cin.tie(0);
    long long int i,n,j,k,a[101];

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>k;
        a[k]=i;

    }
    for(j=1;j<=n;j++)
    {
        cout<<a[j];
        if(j<n)
            cout<<" ";
    }
    cout<<endl;
return 0;
   // main();
}
