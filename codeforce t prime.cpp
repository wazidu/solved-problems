#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,o,p,x,y,q,c=0,d=0,a[100000];

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        //y=sqrtl(a[i]);
c=0;
        for(j=2; j<a[i]; j++)
            {
                if(a[i]%j==0)
                    c++;
             if(c>1)
                break;
            }
      if(c==1)
               cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
