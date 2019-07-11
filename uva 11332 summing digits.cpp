#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,i,j,k,l,m,c,d,sum=0;

    while(cin>>a && a!=0)
    {

    if(a<10)
        cout<<a<<endl;
    else if(a>9)
    {
         while (a>9)
                      {
                                  sum=0;
                                  while (a>0 )
                             {
                                 sum=sum+a%10;
                                 a=a/10;
                             }
                        a=sum;
                        }
                        cout<<sum<<endl;

    }

    }

    return 0;
}
