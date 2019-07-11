#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m=0,n=0;
    string s1,s2;

    cin>>s1;

    for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='1')
            n=1;
        else if((n==1 ) && s1[i]=='0')
            m++;

    }
    if(m>=6)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}
