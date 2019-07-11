#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long int i,j,k,l,m,p,x=1 ,n,node,a[10000],b[10000],suma=0,sumb=0,sumc=0,c=0,d=0;

   cin>>n;

   for(i=0;i<n;i++)
   {
       cin>>p>>a[i];

       if(p==1)
       {
           suma=suma+a[i];
       }

       if(p==0)
       {
           sumb=sumb+a[i];
       }

       /*if(node==0 && i!=0 && suma<sumb)
       {
           node=1;
           int x=suma;
       }*/

       if( x!=0 && suma<sumb)
       {
           node=suma;
           x=0;
       }

   }
   /* if(suma>sumb)
    {
        cout<<suma<<endl;
    }
    else
        */
    {
        a[n]=node;
        sort(a,(a+(n+1)));

        cout<<a[n]<<endl;
    }

    return 0;


}
