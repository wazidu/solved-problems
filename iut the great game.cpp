#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,t=0,n,sum;
    string s1,s2;
    cin>>n;

    while(n--)
    {
        t++;sum=0;
        cin>>s1;

        j=s1.size();
        for(i=0;i<j;i++)
        {
            sum=sum+s1[i]-'0';
        }
        if(j%2==0 && (sum%2)==0)
            cout<<"Case "<<t<<": Safe to push"<<endl;
        else if(j%2!=0 && (sum%2)!=0)
            cout<<"Case "<<t<<": Safe to push"<<endl;
        else
             cout<<"Case "<<t<<": BOOM"<<endl;
    }

    return 0;
}
