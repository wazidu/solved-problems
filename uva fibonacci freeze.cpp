#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,c=0,f1,f2,f;

    while(cin>>n)
    {
        f1=0,f2=1;
        for(i=1;i<=n;i++)
        {
            f=f1+f2;
            f1=f2;
            f2=f;

            cout<<f<<endl;
        }

cout<<"The Fibonacci number for "<<n<<" is "<<f<<endl;

    }




}
