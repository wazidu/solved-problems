#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,a,b,x,y,x1,y1, maxx,minx,maxy,miny,c=0;

    cin>>t;
    while(t--)
    {
        cin>>a>>b;

        for(i=0;i<a;i++)
        {
            cin>>x>>y;
            if(i==0)
            {
                maxx=x; minx=x;
                maxy=y; miny=y;
            }
            else
            {
                if(x>maxx) maxx=x;
                if(x<minx) minx=x;
                if(y>maxy) maxy=y;
                if(y<miny)  miny=y;
            }
        }
        c=0;
        for(j=0;j<b;j++)
        {
            cin>>x1>>y1;
            if((x1<=maxx && x1>=minx)&&(y1<=maxy && y1>=miny))
                c++;
        }
        cout<<c<<endl;
    }

    return 0;


}
