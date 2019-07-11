#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
    long long int i,j,k,l;
    double a,b,c;
    float d,e,f;

    while(cin>>a>>l)
    {
        b=(l*a*a*sin(2*pi/l))/2;

        printf("%.3lf\n",b);
    }
}
