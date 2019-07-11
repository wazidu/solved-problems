#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,d,e,f,i=0;

    cin>>t;

        while(t--)
        {
            i++;

            cin>>a>>b>>c;



            if((a+b)>c && (a+c)>b && (b+c)>a)
            {
                if(a==b && a==c && b==c)
                {
                    cout<<"Case "<<i<<": "<<"Equilateral"<<endl;
                }
                else if(a!=b && a!=c && b!=c)
                {
                    cout<<"Case "<<i<<": "<<"Scalene"<<endl;
                }
                else if(a==b || b==c || a==c)
                     cout<<"Case "<<i<<": "<<"Isosceles"<<endl;
            }
            else
                 cout<<"Case "<<i<<": "<<"Invalid"<<endl;

        }


    return 0;
}
