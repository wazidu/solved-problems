#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,l,m,n,c=0,d=0;

    string s1,s2;

    while(cin>>s1, cin>>s2)
    {
        j=0; c=0;
        for(i=0;i<s2.size();i++)
        {
           if(s2[i]==s1[j])
           {
               c++;
               j++;
               if(c==s1.size()) break;
           }
        }
        if(c==s1.size())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;


    }

return 0;
}
