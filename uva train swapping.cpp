#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int t,n,i,j,k,c=0,d=0,a[10000],b[10000];

    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);

        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
                c++;
        }

        cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;

    }

   return 0;
}
