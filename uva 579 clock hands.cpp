#include<bits/stdc++.h>
using namespace std;
int main()
{
    //long long int i,j,k;
    double i,j,h,m,d,t;

    char a;

    while(cin>>h>>a>>m)
    {
        if(h==0 && m==0)
            return 0;
        else
        {
            i=((h*30)+(m/2));
            j=(m*6);

            t=i-j;

            if(t<0)
                t*=-1;

            if(t>180)
                t=360-t;

            printf("%.3lf\n",t);



        }
    }
    return 0;
}
