#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,c=0,d=0,a[300];

    string s1,s2;

    cin>>s1;
memset(a,0,sizeof a);
    for(i=0; i<s1.length(); i++)
    {
        a[s1[i]-48]++;
    }
    sort(a,a+10);
    for(i=9; i>=0; i--)
    {
        if(a[9]!=a[i]&&a[i]!=0)
        {
            c=1;
            break;
        }
    }
    if(c==0)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;

    return 0;

}
