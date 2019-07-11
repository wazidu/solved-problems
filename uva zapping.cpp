
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,d,e;

    while(cin>>n>>m &&n!=-1 && m!=-1 )
    {

        if(abs(m-n)>50)
        {
            d=max(m,n);
            e=min(m,n);
            cout<<100-d+e<<endl;
        }
        else
            cout<<abs(m-n)<<endl;
    }
    return 0;
}
