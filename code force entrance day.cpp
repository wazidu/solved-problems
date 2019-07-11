#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,n,a[1009];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //l=strlen(a)
    sort(a,a+n);
    cout<<a[n/2 +1]<<endl;

    return 0;
}
