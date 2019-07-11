#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    long long int n,t,i;

    cin>>n>>t;
if(t/n<10){

    for(i=0;i<n;i++)
    {
        cout<<t;
    }

    cout<<endl;
}
else
    cout<<"-1"<<endl;

    return 0;
}*/


int main()
{
    int n,t;
cin>>n>>t;
if(n<2&&t>9)
    cout<<"-1";
else
    {
        if(t<10)
        {
        while(n--)
        cout<<t;
        }
else{
        n-=2;
while(n--)
    cout<<1;cout<<t;
}
}
}

