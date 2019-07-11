#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,k,l,m,c=0,r=0;
    char a[100],b[100];
    string s1,s2;

    cin>>t;

    while(t--)
        {c=0;k=0;
        cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s1;

        if(s1=="LEFT")
        {
            c--;
            a[i]='L';
        }
        else if(s1=="RIGHT")
        {
            c++;
            a[i]='R';
        }
        else
        {
            cin>>s1;
            cin>>k;

            if(a[k]=='L')
                {
                    a[i]='L';
                    c--;
                }
                else
                {
                    a[i]='R';
                    c++;
                }
        }
    }
    cout<<c<<endl;


        }
        return 0;
}
