#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
   long long int i,j=0,k,a[20],b[20],t,n,d=0;

   cin>>t;

   while(t--)
   {
   int sum1=0; int sum2=0;  d=0;  j++;
       cin>>n>>k;
       for(i=0;i<n;i++)
        {cin>>a[i];
        sum1=sum1+a[i];
        }
       for(i=0;i<n;i++)
       {
           cin>>b[i];
           if(a[i]>b[i])
            d=1;

       }
       if(sum1>k) d=1;

       if(d==0)
        cout<<"Case "<<j<<": Yes"<<endl;
       else
         cout<<"Case "<<j<<": No"<<endl;
   }




}
