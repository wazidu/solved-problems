#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);

    long long int t, s,d;

    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        if(d>s || (s-d)%2!=0)
        {
              cout<<"impossible"<<endl;
              }
        else
          cout<<d+(s-d)/2<<" "<<(s-d)/2<<endl;

    }

    return 0;
}
