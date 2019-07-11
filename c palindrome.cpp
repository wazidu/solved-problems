#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,k,l,m,c=0,d=0,a[10000];
char b[10000];
string s1;

gets(b);

l=strlen(b);

for(i=0;i<strlen(b)/2;i++)
{
    if(b[i]==b[l-i-1])
    {
        c++;
    }
    else
    {
        b[i]='a';
        d++;

        //if(d==1)
            //break;
    }
}

if(c==(l/2)-1 && d==1)
{
    cout<<"YES"<<endl;
}
else
    cout<<"NO"<<endl;

    return 0;

}
