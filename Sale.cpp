#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l=0,m,n,a[200];
    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<m;i++)
    {
        if(a[i]<0)
            l=l+abs(a[i]);
    }
    cout<<l<<endl;
    //main();
    return 0;
}
