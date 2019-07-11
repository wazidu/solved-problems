#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,i,j,k,l,m,c=0,d=0,a[10000],b[10000],x1,x2,x3,x4,x5,y1,y2,y3,y4,y5;



    while(cin>>x1>>x2>>x3>>x4>>x5>>y1>>y2>>y3>>y4>>y5)
    {
        if(x1^y1==1 && y2^x2==1 && x3^y3==1 && x4^y4==1 && x5^y5==1  )
        {
            cout<<"Y"<<endl;
        }
        else
            cout<<"N"<<endl;



    }


return 0;



}
