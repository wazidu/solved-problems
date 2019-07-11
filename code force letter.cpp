#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,a[100],c=0,d=0;
    char b[1000],e[100];
    char f[26];

    gets(b);

    for(i=0;i<26;i++)
        a[i]=0;
    l=strlen(b);
    for(i=0;i<l;i++)
    {
        if(b[i]>='a' && b[i]<='z')
             a[b[i]-97]++;
    }
    for(i=0;i<26;i++)
        if(a[i]>0)
        c++;
    cout<<c<<endl;

    return 0;
}
