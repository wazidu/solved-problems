#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,l,m,n=0,a[1000];

 cin>>t;

       while(t--)
       {
           n++;

           cin>>k;

           for(i=0;i<k;i++)
           {
               cin>>a[i];

               if(k%2!=0 && i==(k/2))
                 m=a[i];
               else if(k%2==0 && i==k/2+1)
                m=a[i];
           }

           cout<<"Case "<<n<<": "<<m<<endl;

       }

       return 0;
}
