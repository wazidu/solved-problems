#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,b,n,m,c,d,f,p,pp,t;
    string s,s1,s2,s3,x1,x;
    cin>>m;
    k=1;
    while(m--)
    {
        pp=0;
        cin>>s;
        cin>>n;
        //cout<<"Case "<<k++<<":"<<endl;

        for(i=0; i<n; i++)
        {
            s1=s;
            s2="";
            cin>>x>>x1>>b;
            if(x[0]=='L')
            {
                s2="";
                for(i=0; i<b; i++)
                {
                    s2+=(char)x1[0];
                }
                s=s2+s1;
                s3="";
                s3=s;
               // cout<<s<<endl;
                reverse(s3.begin(),s3.end());
                 //cout<<s3<<endl;
                 if(pp==0)
                         cout<<"Case "<<k++<<":"<<endl;
pp++;
                if(s3==s)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;

            }
            else if(x[0]=='R')
            {
                s2="";
                for(i=0; i<b; i++)
                {
                    s2+=(char)x1[0];
                }
                s3="";
                s=s1+s2;
                s3=s;
               // cout<<s<<endl;
                reverse(s3.begin(),s3.end());
                //cout<<s3<<endl;
                if(pp==0)
                            cout<<"Case "<<k++<<":"<<endl;
pp++;
                if(s3==s)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;

            }
        }
    }
}


