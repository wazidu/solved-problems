#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,b=0,sum=0;

    double l,w,d,m,a;

    cin>>t;

    while(t--)
    {

        cin>>l>>w>>d>>m;

        if(((l<=56.00 && w<=45.00 && d<=25.00 )||((l+w+d)<=125.00)) && m<=7.00)
        {
            sum++;
            cout<<"1"<<endl;
        }
        else
            cout<<"0"<<endl;




    }
    cout<<sum<<endl;
    sum=0;

    return 0;

}
