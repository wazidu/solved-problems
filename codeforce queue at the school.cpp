#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int i,j,k,l,t,n;

    string s1;

    cin>>n>>t;

    cin>>s1;

    for(i=1;i<=t;i++)
    {
        for(j=0;j<n; )
        {
            if(s1[j]=='B' && s1[j+1]=='G')
            {
                s1[j]='G';
                s1[j+1]='B';

                j=j+2;
            }
            else
                j=j+1;
        }
    }

    cout<<s1<<endl;
 //main();
    return 0;
}
