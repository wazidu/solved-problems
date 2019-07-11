#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);

    long long int i,j,k;

    double m1,m2,m3,s,area,l;

    while(cin>>m1>>m2>>m3)
    {
        if((m1+m2)>m3 && (m2+m3)>m1 && (m1+m3)>m2 && m1>0 && m2>0 && m3>0)
        {


        s=(double)(m1+m2+m3)/2.0;
        //cout<<s;
        area=(double)sqrt(s*(s-m1)*(s-m2)*(s-m3));
        l=(double)area*4/3;

        printf("%.3lf\n",l);
//cout<<area<<endl;
        }
        else
            printf("-1.000\n");
    }

    return 0;
}
