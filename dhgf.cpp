#include<bits/stdc++.h>
using namespace std;
long long a[10001001];
int main()
{
    long long int i,j,k,l,q,e,r,t,n,max1=0;


    a[1]=4;
    a[2]=6;
    for(j=4,i=3,k=8;i<=1000100;j+=2)
    {
           n=j/2;
           if((i+n)>1000110)
            break;
           for(l=1,i;l<=n;l++,i++)
           {
               a[i]=k;

           }
           if((i+n)>1000110)
            break;
           k+=2;
           for(l=1,i;l<=n;l++,i++)
           {
               a[i]=k;
           }
           k+=2;

    }

    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }


}
