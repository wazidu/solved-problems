#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,k,n=0,l,t;
     double j;
    cin>>t;

    while(t--)
    {
        n++;
        cin>>j;
        cout<<"Case "<<n<<": "<<2*j-ceil(j/2)<<endl;
    }
    return 0;

}
