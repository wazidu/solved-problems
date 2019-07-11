#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,a,b,x,y,z, yl,bl,tl=0;

    cin>>a>>b;
    cin>>x>>y>>z;

    yl=x*2+y;
    bl=y+z*3;
    if(yl>a)
        tl=yl-a;
    if(bl>b)
        tl=tl+bl-b;

    cout<<tl<<endl;
    //main();
    return 0;
}
