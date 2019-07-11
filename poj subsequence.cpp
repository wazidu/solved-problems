#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long int i,j,s,k,l,m,n,c,d=0,a[100000000] ;
    int main()
{

    while(cin>>n>>s)
    {
        c=0;d=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        for(j=n-1;j>=0;j--)
        {
            d=d+a[j];
            c++;
          //  cout<<c<<endl<<d<<endl;
            if(d>=s)
                break;
        }
        cout<<c<<endl;

    }


    return 0;


}
