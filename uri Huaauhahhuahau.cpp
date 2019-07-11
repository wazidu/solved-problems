#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,j,k,l;
    string s,s2;

    while(cin>>s)
    {
        i=s.size();

        if(s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u' )
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }

   return 0;
}
