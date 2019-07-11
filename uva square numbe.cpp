#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int i,j,k,l,m,n,c=0,d=0;

    while(cin>>n>>m && n!=0 && m!=0)
    {
        c=0;
        for(i=n;i<=m;i++)
        {
            k=sqrt(i);
            if(i==k*k)
                c++;
        }

        cout<<c<<endl;

    }



   return 0;

}
