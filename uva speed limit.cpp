#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,c=0,d=0,v,n,t,a[10000],sum=0;

    while(cin>>n &&n!=-1)
    {
        a[0]=0; sum=0;

        for(i=1;i<=n;i++)
        {
            cin>>v>>a[i];

            sum=sum+v*(a[i]-a[i-1]);


        }

        cout<<sum<<" miles"<<endl;



    }

    return 0;

}
