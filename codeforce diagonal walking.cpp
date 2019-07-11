#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,d=0;

    string s1,s2;

    cin>>m>>s1;

    for(i=0;i<s1.length();i++)
    {
        if(i>0 && ((s1[i-1]=='R'&& s1[i]=='U')||(s1[i-1]=='U'&& s1[i]=='R')))
           {
               s1[i-1]='0\n';
               s1[i]='D';
               d++;
           }
    }
    cout<<d+s1.length()-2*d<<endl;

    //main();
    return 0;



}
