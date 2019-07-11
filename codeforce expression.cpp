#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans;

    cin>>a>>b>>c;
int p=(a+b*c);
int q=a*(b+c);
int r=a*b*c;
int s=(a+b)*c;

   ans= max(p, q);
    ans=max(ans,r);
   ans= max(ans,s);
   ans= max(ans,a+b+c);
    cout<<ans<<endl;


}
