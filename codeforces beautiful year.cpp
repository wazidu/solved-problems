#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int n,i,j,a,b,c,d;

    cin>>n;
    int p=n;
    for(i=0; ; i++)
    {
        p++;
        int q=p;
        a=q%10;
        q=q/10;
        b=q%10;
        q=q/10;
        c=q%10;
        d=q/10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout<<p<<endl;
            //return 0;
break;
        }
    }
    //main();

}
