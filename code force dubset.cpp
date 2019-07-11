#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,j,k,a[1000],b[1000],c=0,d=0,e=0;

    char f[1000],g[1000], h[]="WUB";

    gets(f);

    strcmp(f,h);

    for(i=0;i<strlen(f);i++)
    {
        if(f[i]=='W' && f[i+1]=='U' && f[i+2]=='B')
        {
           f[i]=' ';
           f[i+1]=' ';
           f[i+2]=' ';
        }
    }

    cout<<f<<endl;

    return 0;
}
