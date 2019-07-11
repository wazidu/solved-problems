#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,l,m,c=0,d=0,sum,a[10000];

    string s1,s2;

    char s[100000];

    cin>>t;

    while(t--)
    {
        for(i=97;i<=122;i++)
        {
            cin>>a[i];
        }
        cin>>s1;

        sort(s1.begin(),s1.end());

        for(j=0;j<s1.size();j++)
        {
            int b=s1[j];
            a[b]=0;
        }
        sum=0;
        for(k=97;k<=122;k++)
            sum=sum+a[k];

       cout<<sum<<endl;
    }


   return 0;


}
