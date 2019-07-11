#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,i,j,k,a[100000];

    cin>>n>>m;
    for(i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);

    cout<<a[n-1]-a[0]<<endl;

    return 0;
}
