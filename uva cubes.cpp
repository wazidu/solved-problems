#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,t,l,m,n,c=0,d=0,sum=0;

    while(cin>>n && n!=0)
    {
        int x, y=1000000;
        for(i=1;i<=100;i++)
            for(j=1;j<=i;j++)
        {
            if(i*i*i-j*j*j==n && j<y )
            {
                x=i;
                y=j;
            }

        }
        if(y==1000000)
            cout<<"No solution"<<endl;
        else
            cout<<x<<" "<<y<<endl;




    }





}
