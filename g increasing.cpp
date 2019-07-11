#include<bits/stdc++.h>
using namespace std;
int main()
{
   // ios_base::sync_with_stdio(0),cin.tie(0);
    long long int i,j,k,l,m,c=0,d,n,a[10000];

    //cin>>n>>d;
    scanf("%lld%lld",&n,&d);
scanf("%lld",&a[0]);
    for(i=1;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]<=a[i-1])
        {
            k=a[i-1]-a[i];
                l=k/d+1;
                c=c+k/d+1;
                a[i]=a[i]+l*d;

        }
    }
    /*for(i=1;i<n;i++)
    {
        while( a[i]<=a[i-1])
        {

               a[i]=a[i]+d;
               c++;
               //if(a[i]>a[i-1]) break;

        }
    }*/

  cout<<c<<endl;
  return 0;
}
