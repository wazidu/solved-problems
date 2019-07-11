#include <iostream>
using namespace std;
int main()
{

    int i,n,o=0,k,b,m=101,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
    if(k<=m)
        {
            a=i;
            m=k;
    }
    if(k>o)
        {
            b=i;
            o=k;
    }
    }
    n=n+b-a-1;
    if(b>a)
        n--;
    cout<<n;

return 0;
}
