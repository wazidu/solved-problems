#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,t;
    char s[100000];
   // string s;
    cin>>t;
    cin.ignore();
   while(t-->0)
    {
        gets(s);
l=strlen(s);
        for(i=(l/2)-1;i>=0;i--)
            cout<<s[i];
        for(i=l-1;i>=l/2;i--)
            cout<<s[i];
        cout<<endl;
    }

    return 0;

}
