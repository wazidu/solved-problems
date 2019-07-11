#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int t,c=0,d=0,i,j,k,n,m;
    //double n,m,l

    while(cin>>n>>m)
    {
        c=0;
        k=n;
        while(k>=m)
    {
            c=c+k/m;
k=k/m+k%m;
        }

            cout<<n+c<<endl;
    }


    return 0;


}
