#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i=0,j,k;
     double c,d,e,f,g;

    cin>>t;
    while(t--)
    {
        i++;

        cin>>c>>d;

        f=c+5.0/9.0*d;
        printf("Case %d: %.2lf\n",i,f);
    }
    return 0;
}
