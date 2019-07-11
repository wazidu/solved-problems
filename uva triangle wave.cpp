#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{

    long long int i,t,n,f,j,k,l,m,a[100],sum=0;

    cin>>t;

    while(t--)
    {
        cout<<endl;
        cin>>n>>f;

        while(f--)
        { cout<<endl;
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=i;j++)
                    cout<<i;
                cout<<endl;
            }

            for(i=n-1;i>0;i--)
            {
                for(j=i;j>0;j--)
                    cout<<i;
                cout<<endl;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
