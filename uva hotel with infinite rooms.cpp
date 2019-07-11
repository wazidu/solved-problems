#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,c=0,s,d;

    while(cin>>s>>d)
    {
        c=0;
        for(i=s;;i++)
        {
            c=c+i;
            if(c>d || c==d)
               {
                   cout<<i<<endl;
            break;
               }
        }
        //cout<<s<<endl;



    }

return 0;


}
