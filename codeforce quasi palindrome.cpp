#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,l,a,c,v,d,b,n,m;
    string s,s1,s2[10000],s3,s4;
    char s6;
    while(cin>>s)
    {
        s1="";
        k=0;
        for(i=s.size()-1,j=0; i>=0; i--,j++)
        {
            if((s[i]=='0'&&s[j]!='0'&&k==0))
            {
                //cout<<"l";
                j--;
            }
            else
            {
                k=1;
            s1+=s[i];
            //cout<<s1<<endl;
            }
        }
        s3=s1;
        reverse(s1.begin(),s1.end());
        if(s3==s1)
            cout<<"YES"<<endl;
        else

            cout<<"NO"<<endl;
    }
}


