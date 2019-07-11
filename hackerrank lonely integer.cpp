#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int i,j,k,l,m,n,a[1000],c,d=0;

    cin>>n;
    k=0;
    while(n--)
    {
        cin>>m;
        k=k^m;
    }
    cout<<k<<endl;


}
