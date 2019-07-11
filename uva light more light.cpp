#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l;

    while(cin>>i && i!=0)
    {
        j=sqrt(i);

        if(j*j== i)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
