#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);

    long long int t,i,a[3];

    cin>>t;
    i=0;
    while(t--)
    {
        i++;
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<"Case "<<i<<": "<<a[1]<<endl;

    }
    return 0;
}
