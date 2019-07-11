#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int n,i,j,k,c=0;

    //while(1)
    {
        c=0;
        cin>>n>>k;

        for(i=0;i<n;i++)
        {
            cin>>j;

            c=c+min(2*j,(k-j)*2);
        }

        cout<<c<<endl;

    }
return 0;

}
