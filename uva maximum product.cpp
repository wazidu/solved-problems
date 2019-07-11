#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k=0,l,m,n,c=0,d=0,sum=0,a[1000];


    while(cin>>n)
    {
        k++;
        long long int max=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int p;

        for(i=0;i<n;i++)
        {
            p=1;
            for(j=i;j<n && p;j++)
            {
                p*=a[j];
                if(p>max)
                    max=p;
            }
        }

      // cout<<"Case #"<<k<<": The maximum product is "<<max<<"."<<endl;
       cout<<"Case #"<<k<<": The maximum product is "<<max<<"."<<endl;

       cout<<endl;

    }

   return 0;

}
