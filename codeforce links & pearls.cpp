#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=0,p=0,i;
    string s;

    cin>>s;

    for(i=0;i<s.length();i++)
    {
        if(s[i]=='-')
            l++;
        else
            p++;
    }

    if(l==0 || p==0|| l%p==0)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;

        //main();
        return 0;
}
