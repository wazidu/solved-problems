#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,i,j,k,a[10000],def=0,d=0;

   cin>>n;

   for(i=0;i<n;i++)
   {
       cin>>a[i];

       if(i>0)
       {
           def=a[i-1]-a[i];
           if(i>1 && def!=j)
           d=1;

           j=def;
       }
   }

  if(d==0)
  {
      //if(def>=0)
        cout<<a[n-1]-def<<endl;
     // else
        //cout<<a[n-1]+def<<endl;
  }
  else
    cout<<a[n-1]<<endl;
  main();
  return 0;
}
