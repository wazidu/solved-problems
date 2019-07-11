#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int f,i,j,n,k,c=0,sum=0;

    while(cin>>n && n>0)
    {
        sum=0;int f1=0; int f2=1;
        for(i=1;i<=n;i++)
        {
             f=f1+f2;
            f1=f2; f2=f;


        }
        cout<<f<<endl;
    }

  return 0;
}
