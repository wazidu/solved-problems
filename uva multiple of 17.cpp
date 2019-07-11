#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,c=0,s=0;

    //char a[1000];
    string a;

    while(cin>>a)
    {
        s=0;
        l=a.size();

        for(i=0;i<l;i++)
        {
            s=s*10+a[i]-'0';
            s=s%17;

        }
        if(s==0 && l==1)
            break;
        else if(s==0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }

    return 0;
}
