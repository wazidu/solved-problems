#include<bits/stdc++.h>
using namespace std;
int main()
{
    double d,u,v,j,k,t1,t2;
    int i=0,t;

    cin>>t;

    while(t--)
    {
        cin>>d>>v>>u;
        i++;

        if(d==0||v==0||u<=v)
        {
            //cout<<"Case "<<i<<": "<<"can’t determine"<<endl;
            printf("Case %d: can't determine\n",i);

        }
        else
        {
             t1=d/u;
        t2=d/sqrt(u*u-v*v);

        printf("Case %d: %.3lf\n",i,fabs(t2-t1));
        }

    }
    return 0;
}
