#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,n,l,w,h,h1,weight,c=0;

   while(cin>>n &&n!=0)
   {
       weight=0;h1=0;

       while(n--)
       {
           cin>>l>>w>>h;
t=l*w*h;

           if(t>=weight && h>=h1)
           {
               weight=t;
               h1=h;
           }
       }
       cout<<weight<<endl;
   }


  return 0;


}
