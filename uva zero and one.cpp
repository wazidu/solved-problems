#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int a,b,c,t;

    while(cin>>a>>b>>c)
    {
        if((a+b+c)==0 || (a+b+c)==3)
        {
            cout<<"*"<<endl;
        }
        else
        {
            if(a==0 && b==0 && c==1)
                cout<<"C"<<endl;
            else if(a==0 && b==1 && c==0)
                cout<<"B"<<endl;
            else if(a==1 && b==0 && c==0)
                cout<<"A"<<endl;
            else if(a==1 && b==1 && c==0)
                cout<<"C"<<endl;
            else if(a==1 && b==0 && c==1)
                cout<<"B"<<endl;
            else if(a==0 && b==1 && c==1)
                cout<<"A"<<endl;

        }
    }

    return 0;
}
