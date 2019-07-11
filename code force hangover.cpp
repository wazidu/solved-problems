#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,a[100],c=0,d=0;
    char b[100],e[100],ch;
  //  char f[26];

    cin>>b;


    l=strlen(b);

    for(ch='a';ch<='z';ch++)
    {
        for(i=0;i<l;i++)
        {
            if(ch==b[i])
            {
                c++;
                break;
            }
        }
    }

    cout<<c<<endl;

    return 0;
}
