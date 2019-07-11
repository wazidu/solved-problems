#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,l,c,v,b,n,m,d,r,t,a[10001];

    while(scanf("%lld",&n)==1)
    {
        memset(a,0,sizeof a);

        if(n==0)
            break;

        for(i=0,j=0; i<n; i++)
        {
            cin>>k;
            if(k>0)
                {a[j]=k;
                j++;
                }

        }
        for(i=0; i<j-1; i++)
            cout<<a[i]<<" ";

        cout<<a[i]<<endl;
    }

}
