#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,i,k,l,ladd,radd,t,v;

    string  s1,s2;

    cin>>t;
    while(t--)
    {
        ladd=0;radd=0;
        cin>>s1>>s2;
for(i=0;i<s1.size();i++)
{
    ladd=ladd+s1[i];
}
for(i=0;i<s2.size();i++)
{
    radd=radd+s2[i];
}

    l=abs(ladd-radd);
    cout<<ladd<<" "<<radd<<endl;
        cout<<l<<endl;
    }
}
