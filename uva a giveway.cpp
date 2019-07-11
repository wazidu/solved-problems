#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,l,n,m,c=0,d=0;
   // double a,b,p,q;
int main()
{


    while(cin>>n && n!=0)
    {
c=0;
        for(i=1;i<=21;i++)
        {
            if((i*i*i*i*i*i)==n)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            cout<<"Special"<<endl;
        else
            cout<<"Ordinary"<<endl;



    }



    return 0;

}
