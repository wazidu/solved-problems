#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,c,d,m,b,n;
    cin>>n>>m>>a>>b;
    if(m>n && b<(n*a))
        cout<<b<<endl;
    else
    {
        if(m*a<=b)cout<<n*a;
        else
        {
            int x=min((n%m)*a,b);
            cout<<(n/m)*b+x;
        }
    }
    //main();



}
