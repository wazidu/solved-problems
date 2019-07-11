#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,a;

    cin>>x1>>y1>>x2>>y2;

    a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("%.4lf\n",a);
    return 0;
}
