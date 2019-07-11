#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l=0,m,n,c=0,d=0;
    char p[101];
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>p[i];
        if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'||p[i]=='y')
        {
            if(c==1)
            {
                p[i]='0';
            }
            else
            {
                c=1;
            }


        }

        else
        {
            c=0;
        }

    }
    for(i=0; i<n; i++)
    {
        if(p[i]!='0')
            cout<<p[i];
    }
    cout<<endl;

   // main();
    return 0;
}
