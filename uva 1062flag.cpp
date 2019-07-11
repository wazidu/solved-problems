#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    long long int t,i,j,k;
    double a,b,c,d,r,w;

    cin>>t;
    while(t--)
    {
        cin>>a;

        r=a/5.0; w=r*3;

        printf("%.2lf %.2lf\n",PI*r*r,(a*w)-PI*r*r);
    }
return 0;
}
