#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,x,y,l;

    while(cin>>x>>y)
    {
        j=x;k=y;
        for(i=1;;i++)
        {
            j=j*i; k=k*i;

            if((k-j)>y)
            {
                l=i;
                break;
            }

        }
        cout<<l<<endl;
    }



}
