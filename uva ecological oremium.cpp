#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,n,t,a,b,c,sum=0;

    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            sum=0;
            cin>>n;

            while(n--)
            {
                cin>>a>>b>>c;

                sum=sum+a*c;
            }

            cout<<sum<<endl;
        }

    }

    return 0;
}
