#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,c=1,d=0,a[100];

    char b[100];
    gets(b);
    n=strlen(b);
    for(i=1;i<n;++i)
    {
        if(b[i]==b[i-1])
        {
            c++;

            if(c==7)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
            c=1;

    }
cout<<"NO"<<endl;
    return 0;
}
