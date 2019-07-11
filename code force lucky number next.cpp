#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k,l,c,v,b,n,m;

    while(cin>>n)
    {
        if(n<10)
             cout<<"1"<<endl;
        else if(n<100)
        {
            m=(n/10);
            m=(m+1)*10;
            cout<<(m-n)<<endl;
        }
         else if(n<1000)
        {
            m=(n/100);
            m=(m+1)*100;
             cout<<(m-n)<<endl;
        }
        else if(n<10000)
        {
           m=(n/1000);
            m=(m+1)*1000;
            cout<<(m-n)<<endl;
        }
         else if(n<100000)
        {
            m=(n/10000);
            m=(m+1)*10000;
             cout<<(m-n)<<endl;
        }
        else if(n<1000000)
        {
            m=(n/100000);
            m=(m+1)*100000;
             cout<<(m-n)<<endl;
        }
         else if(n<10000000)
        {
            m=(n/1000000);
            m=(m+1)*1000000;
             cout<<(m-n)<<endl;
        }
        else if(n<100000000)
        {
           m=(n/10000000);
            m=(m+1)*10000000;
             cout<<(m-n)<<endl;
        }
         else if(n<1000000000)
        {
            m=(n/100000000);
            m=(m+1)*100000000;
             cout<<(m-n)<<endl;
        }
        else if(n<10000000000)
        {
            m=(n/1000000000);
            m=(m+1)*1000000000;
             cout<<(m-n)<<endl;
        }
    }
}
