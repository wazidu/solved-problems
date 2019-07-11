#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double a,b;
    char c, s1[10000],s2[10000];

    while(cin>>s1>>c>>s2)
    {

        a=atof(s1);
        b=atof(s2);

        cout<<s1<<" "<<c<<" "<<s2<<endl;

        if(a>2147483647)
            cout<<"first number too big"<<endl;
        if(b>2147483647)
            cout<<"second number too big"<<endl;
        if(c=='+' && (a+b)>2147483647)
           cout<<"result too big"<<endl;
        if(c=='*' && (a*b)>2147483647)
           cout<<"result too big"<<endl;

    }
return 0;
}
