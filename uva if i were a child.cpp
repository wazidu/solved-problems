#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,l,m;
int main()
{
    char a;
    while (cin>>i>>a>>j)
    {
        if(a=='%')
            cout<<i%j<<endl;
        else if(a=='/')
            cout<<i/j<<endl;


    }
return 0;
}

