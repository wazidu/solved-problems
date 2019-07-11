#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,z=0;
    double a,b,c,A,B,C,s,p,q,r;

    cin>>t; j=0;
    while(j!=t)
    {
        cin>>a>>b>>c;

        if(a<=0 || b<=0 || c<=0)
        {
            cout<<"These are invalid inputs!"<<endl;
            j++;
        }
        else
        {
            A=1/a;B=1/b;C=1/c;
            s=(A+B-C)*(B+C-A)*(C+A-B)*(A+B+C);
            if(s<0)
                {cout<<"These are invalid inputs!"<<endl;
                j++;
                }
            else
            {
                double area=1/s;

                printf("%.3lf\n",sqrt(area));

            }

        }
    }
}
