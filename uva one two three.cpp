#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,t;

  char s[10];

    cin>>t;
t=t+1;
   while(t--)
    {
       gets(s);

        if(strlen(s)>3)
        {
            cout<<3<<endl;
        }
        else
        {
            if(s[0]=='o' && s[1]=='n' && s[2]=='e')cout<<1<<endl;
            else if (s[0]=='o' && s[1]=='n' )  cout<<1<<endl;
            else if (s[0]=='o' && s[2]=='e' )  cout<<1<<endl;
            else if (s[1]=='n' && s[2]=='e' )  cout<<1<<endl;
            else if (s[0]=='t' && s[1]=='w' && s[2]=='o' )  cout<<2<<endl;
            else if (s[0]=='t' && s[1]=='w'  )  cout<<2<<endl;
            else if (s[0]=='t' && s[2]=='o'  )  cout<<2<<endl;
            else if (s[1]=='w' && s[2]=='o'  )  cout<<2<<endl;
        }
    }

return 0;
}
