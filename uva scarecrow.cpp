#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,t,m,n,a[10000],b[10000],c=0;
    char c1[10000],c2[10000];
    string s1,s2;

    cin>>t;

    for(j=1;j<=t;j++)
    {
        cin>>n>>s1;
        c=0;
        for(i=0;i<n;)
        {
            if(s1[i]=='#')
                i++;
            else
            {
                c++;
                i=i+3;
            }
        }
        cout<<"Case "<<j<<": "<<c<<endl;
    }




}
