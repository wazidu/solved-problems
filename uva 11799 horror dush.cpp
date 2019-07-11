#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int t,n,j,k=0,d=0;

    cin>>t;

    while(t--)
    {
        d++;
        cin>>n;
        while(n--)
        {
            cin>>j;
            if(j>k)
                k=j;

        }
        cout<<"Case "<<d<<": "<<k<<endl;
        k=0;
    }

    return 0;

}
