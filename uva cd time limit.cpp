#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,l,m,n,n1[10000000],m1[10000000],c=0,d;
int main()
{

    while(cin>>n>>m && n!=0 && m!=0)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>n1[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>m1[i];
            for(j=0;j<n;j++)
            {
                if(n1[j]==m1[i])
                    c++;
        }
        }
       // d=max(n,m);

       /* for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(n1[i]==m1[j])
                    c++;
            }
        }*/

        cout<<c<<endl;

    }
}
