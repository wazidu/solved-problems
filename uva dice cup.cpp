#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,j,k,n,m,c=0;

    while(cin>>n>>m)
    {
        if(c>0)
            cout<<endl;


        j=min(n,m); k=max(n,m);

        for(i=j+1;i<=k+1;i++)
        {
            cout<<i<<endl;
        }

//cout<<endl;
c++;
    }

    return 0;

}
