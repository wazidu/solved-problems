#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin>>s>>k;
    int n=s.length();
    int len=n/k;
    for(int i=0;i<n;i++)
    {
        if(n%k || s[i]!= s[(i/len)*len+len-1-(i % len)])
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
