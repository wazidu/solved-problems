#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,sum=0,a[100000];

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>k;
       if(k>1)
        {
            sum=sum+k-1;
        }

    }
    cout<<sum;

    return 0;
}

