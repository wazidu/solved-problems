#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
   long long int i,j,t,k,l,m,c=0,p=0;
   char s[10000];
   string s1,s2,s3;
   cin>>t;

   while(t--)
   {
       cin>>s1>>s2;
p=0;
       l=s1.size();
       k=s2.size();
for(i=k-1,j=l-1;i>=0;i--,j--)
{
    if(s1[j]!=s2[i])
    {p=1;
    break;
    }
}
       if(p==0)
        cout<<"encaixa"<<endl;
       else
        cout<<"nao encaixa"<<endl;
}
    return 0;
}
