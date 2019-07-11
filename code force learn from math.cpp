#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m,b,c;

    cin>>n;

if(n%2!=0)
{
  m=n/2;

    b=n/2+1;

    cout<<m<<" "<<b<<endl;
}
else
    cout<<n/2-1<<" "<<n/2+1<<endl;

    return 0;
}
