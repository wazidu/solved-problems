#include<iostream>
using namespace std;
int a,k,n,i,s;
int main()
{

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        s+=a;
        if(s<0)
        {
            k++;
            s=0;
        }
    }
    cout<<k;
}
