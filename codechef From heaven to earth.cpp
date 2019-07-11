#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,t;
    double n,v1,v2,t1,t2,x,y,z=sqrt(2);
    cin>>t;
    while(t--)
    {
        cin>>n>>v1>>v2;

        t2=2.00*(n/v2);

        t1=2.00*((z *n)/v1);
cout<<t1<<endl<<t2<<endl;
        if(t1<t2)
             cout<<"Elevator"<<endl;
        else
           cout<<"Stairs"<<endl;
    }
    return 0;
}
