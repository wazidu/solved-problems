#include <iostream>
#include<stdio.h>

 using namespace std;

 int main()
 {
     int i,j,k,l,m,n,count=0;

     cin>>l;

     for(i=0;i<l;i++)
     {
         cin>>j>>k>>m;
         n=j+k+m;

         if(n>=2)
         {
             count++;
         }
         else
            continue;
     }
     cout<<count<<endl;
return 0;
 }
