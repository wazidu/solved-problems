#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,l,a[100000],c,b,d,n,m;
    while(cin>>n)
    {
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n*2);

        c=0;d=0;
        if(a[n-1]<a[n])
        {

        for(i=2*n-1,j=n-1;j>=0;i--,j--)
        {
            if(a[i]<=a[j])
            {
                c=1;
               // cout<<"NO"<<endl;
          break;//   return 0;

            }

        }
        if(c==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    else
        cout<<"NO"<<endl;
    }
    return 0;
}
