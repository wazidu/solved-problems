#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,p=0;

    char s[10000];

    while(gets(s))
    {
        l=strlen(s);
p=1;
        for(i=0;i<l;i++)
        {
            if(s[i]!=' ' && (p%2)!=0)
               {
                   s[i]=toupper(s[i]);
                   p++;
               }
            else if(s[i]!=' ' && (p%2)==0)
               {
                   s[i]=tolower(s[i]);
                   p++;
               }
        }
        cout<<s<<endl;
    }
    return 0;
}
