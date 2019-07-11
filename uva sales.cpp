#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,l,m,n,a[10000],b[10000],c=0,d=0,sum=0;

    cin>>t;

    while(t--)
    {
        sum=0;

        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>a[i];

            if(i>0)
            {
                for(j=0;j<i;j++)
                {
                    if(a[j]<=a[i])
                        sum++;
                }
            }

        }

        cout<<sum<<endl;


    }

    return 0;


}
