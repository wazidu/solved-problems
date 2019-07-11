#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int i,k,l,a,c,v,b,n,m,p=1;
    string s[10000],s1[10000],s2,s3;
    cin>>n;
    while(n--)
    {
        cin>>m>>b;
        for(i=0; i<m; i++)
            cin>>s[i];
        c=0;
        for(i=0; i<m; i++)
        {
            for(k=0; k<b; k++)
            {
                s2="";
                l=0;
                for(k; k<b; k++)
                {
                    if(s[i][k]=='X')
                        break;
                    s2+=s[i][k];
                    l++;
                }
                if(l>=2)
                {
                    s1[c]=s2;
                    c++;
                }
            }
        }

        for(i=0; i<b; i++)
        {
            for(k=0; k<m; k++)
            {
                s2="";
                l=0;
                for(k; k<m; k++)
                {
                    if(s[k][i]=='X')
                        break;
                    s2+=s[k][i];
                    l++;
                }
                if(l>=2)
                {
                    s1[c]=s2;
                    c++;
                }
            }
        }

        for(i=0; i<c; ++i)
        for(int j=i+1; j<c ; ++j)
        {
            if(s1[i].compare(s1[j])>0)
            {
                s3=s1[i];
                s1[i]=s1[j];
                s1[j]=s3;
            }
        }
        cout<<"Case "<<p++<<": "<<s1[0]<<endl;
    }




}
