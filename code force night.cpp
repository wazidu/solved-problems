#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,a[100000],c=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(i=1;i<n-1;i++)
    {
        if(a[i]>a[0] && a[i]<a[n-1])
            c++;
        else
            continue;
    }
    cout<<c<<endl;

    return 0;
}
