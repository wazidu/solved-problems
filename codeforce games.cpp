#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,l,m=0,h[1000],a[10000];
   cin>>n;

   for(i=1;i<=n;i++)
   {
       cin>>h[i]>>a[i];
   }

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n,i!=j;j++)
       {
           if((h[i]==a[j])  )
              m++;
              if((h[j]==a[i]))

                m++;
       }
   }
   cout<<m<<endl;

   //main();
   return 0;

}
