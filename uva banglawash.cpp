#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t1,i,n,j=0,k,l,b=0,w=0,t=0,a=0;

    char m[100];

    cin>>t1;

    while(t1--)
    {
        j++;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>m[i];

            if(m[i]=='B')
                b++;
            else if(m[i]=='W')
                w++;
            else if(m[i]=='T')
                t++;
            else if(m[i]=='A')
                a++;


        }
        if(a==n)
             cout<<"Case "<<j<<": "<<"ABANDONED"<<endl;
        else if(b==n || b==(n-a))
            cout<<"Case "<<j<<": "<<"BANGLAWASH"<<endl;
        else if(w==n || w==(n-a))
            cout<<"Case "<<j<<": "<<"WHITEWASH"<<endl;
        else if(b>w)
             cout<<"Case "<<j<<": "<<"BANGLADESH "<<b<<" - "<<w<<endl;
        else if(w>b)
             cout<<"Case "<<j<<": "<<"WWW "<<w<<" - "<<b<<endl;
        else if(b==w)
             cout<<"Case "<<j<<": "<<"DRAW "<<b<<" "<<t<<endl;

        b=0,w=0,t=0,a=0;
    }
    return 0;
}
