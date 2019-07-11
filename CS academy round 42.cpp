#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,c=0,d=0;

    string s1,s2,s,s4;

   while( cin>>s>>s1>>s2){
    l=s1.size();
    s4="";
    for(i=0; i<s.size(); i++)
    {
        s4+=s[i];
        if(s4.size()>l)
        {
             cout<<s4[0];
            s4.erase (s4.begin()+0);
            //cout<<s4<<endl;

        }
        if(s4==s1)
        {
            cout<<s2;
            s4="";
        }
        else if(s4==s2)
        {
            cout<<s1;
            s4="";
        }


    }
    cout<<s4<<endl;
    s4="";


   }
    return 0;

}
