#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c;

    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;

        if(   (a+b)>c &&  (b+c)>a && (a+c)>b     )
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
    return 0;
}
