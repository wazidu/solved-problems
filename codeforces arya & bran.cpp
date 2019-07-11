#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,a[100000],c=0,d=0,sum=0,extra=0,sum1=0;

    cin>>n>>k;
  for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if((a[i]+extra)>=8)
        {
            sum=sum+8;
            extra=extra+a[i]-8;
            c++;
        }
        else
        {
            sum=sum+a[i]+extra;
            extra=0;
            c++;
        }
        sum1=sum1+a[i];

    }
    if(8*n<k || sum1<k)
        cout<<"-1"<<endl;
    else
    {
        if(n>=c)
            cout<<c<<endl;
        else
            cout<<"-1"<<endl;

    }

return 0;



}
