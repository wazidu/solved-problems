#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,m,n,k,l=-1,a[100],b[100];

    cin>>m>>n;

    for(i=1;i<=m;i++)
    {
        if(i%2!=0)
        {
            l++;
            a[l]=i;

        }
    }
    cout<<l<<endl;
    for(j=1;j<=m;j++)
        {
            if(j%2==0)
                a[l+1]=j;

                l++;
        }
cout<<a[n-1]<<endl;
    return 0;
}
