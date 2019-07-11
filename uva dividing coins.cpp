#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,t,n,m,sum=0,def=0,min1=0,a[10000], asum=0;

    cin>>t;

    while(t--)
    {
        sum=0,def=0,min1=10000000,asum=0;
        cin>>n;
        for(i=0;i<n;i++)
            {cin>>a[i];
            asum=asum+a[i];
            }

        sort(a,a+n);

        for(i=0;i<n-1;i++)
        {
            def=def+a[i];
            k=(asum-def)-def;
            if(k>=0 && k<min1)
                min1=k;

        }

        cout<<min1<<endl;

    }
}
