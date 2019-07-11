#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,s;

    cin>>a>>b>>c>>d>>e;
if((a==0 && b==0 && c==0 && d==0 && e==0))
    cout<<"-1"<<endl;
   else if(((a+b+c+d+e)%5==0))
        cout<<(a+b+c+d+e)/5<<endl;
    else
        cout<<"-1"<<endl;

    //main();
    return 0;
}
