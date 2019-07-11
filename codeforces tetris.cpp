#include<bits/stdc++.h>
using namespace std;
int main(


         )
         {
             long long int a[10001],i,j=0,k,n,m,c=0,d=0;

             cin>>n>>m;

             for(i=0;i<m;i++)
             {
                 cin>>k;
       a[k]++;
       if(k==1)
        j++;
                 if(k==0)
                    c++;
                 if(k==n)
                    d++;
             }
           cout<<*min_element(a+1,a+n+1)<<endl;
             main();
             return 0;
         }
