#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,t;
    char s[100000];
    //string s;
    cin>>t;
    cin.ignore();
   while(t-->0)
    {
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(i==0 && s[i]!=' ')
            cout<<s[i];
        else if (s[i]!=' ' && s[i-1]==' ')
            cout<<s[i];
        else
            continue;
    }
      cout<<endl;
    }

    return 0;

}

