#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i=0,j,k,l;

    cin>>t;
    while(t--)
    {
        i++;
        cin>>j>>k>>l;
int ans=k+l;
while(ans>j)
{
    ans=ans-j;
}
        cout<<"Case "<<i<<": "<<ans<<endl;



    }

    return 0;
}
