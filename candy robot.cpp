#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,i,j,k,l,sum=0,c=0,a[1000];

    cin>>n>>t;

    for(i=0;i<t;i++)
    {
        cin>>k;

        //a[i]=n-k;


       if(i<t-1)
       {
           l=n-k;
           if(l<5)
            sum=sum+n-l;

       }

    }
    for(i=0;i<t;i++)
    {
        if(a[i]!=5)
            sum=sum+a[i];
    }
    cout<<sum<<endl;

    return 0;
}
