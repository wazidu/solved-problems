#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    long long int i=0,j=0,k,t,e,m;

    double a, b[10000],c,d,f;
    cin>>t;

    while(t--)
    {
        j++;c=0;
        for(i=0;i<12;i++)
        {
            cin>>b[i];
            c=c+b[i];
            d=c/12.0;
              e=a/1000;
f=fmod(d,1000.00);
        }



if(d<999.00)
        printf("%d $%.2lf\n",j,d);
    else
        printf("%d $%d,%.2lf\n",j,e,f);
    }

}*/

int main()
{

    int t,i,tc=1,c;
    double balance,sum = 0.0,avg=0.0,r;
    cin >> t;
    while(t--)
    {
        for(i=0; i<12; i++)
        {
            cin >> balance;
            sum += balance;
            avg = sum/12.0;
            c = avg/1000.0;
            r = fmod(avg,1000.00);
        }
        if(avg < 999.00)
            printf("%d $%.2lf\n",tc,avg);

        else
            printf("%d $%d,%.2lf\n",tc,c,r);
        tc++;

        avg = 0;
        sum = 0;

    }

    return 0;
}
