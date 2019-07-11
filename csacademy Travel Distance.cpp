#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,j,k,n=0,t,s=0,e=0,w=0,f=0;
    string s1;
    cin>>s1;
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='N')
        {
            n++;
        }
        else if(s1[i]=='S')
        {
            s++;
        }
        else if(s1[i]=='E')
        {
            e++;
        }
        else if(s1[i]=='W')
        {
            w++;
        }

    }
  cout<<abs(n-s)+abs(e-w)<<endl;
    //main();
    return 0;
}

