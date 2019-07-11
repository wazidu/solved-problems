#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);

    long long int t,i=0,j,k,l,n,c=0,sum=0;

    double day ,d,m,y,d1,m1,y1, min,max;

    string s1 ,s2,s3;


    cin>>t;

    while(t--)
    {

        cin>>s1;
        cin>>d>>m>>y;

        day= d/365.0+m/12.0+y;

        if(i==0)
        {
            min=day; s2=s1;

            max=day; s3=s1;

        }
        else
        {
            if(day<min)
            {
                min=day; s2=s1;
            }

            if(day>max)
            {
                max=day; s3=s1;
            }



        }

i++;
    }

cout<<s3<<endl<<s2<<endl;


return 0;

}
