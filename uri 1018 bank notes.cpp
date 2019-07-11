#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,r,n;

    cin>>a;
    cout<<a<<endl;

    n=a/100;
    r=a%100;

    cout<<n<<" nota(s) de R$ 100,00"<<endl;

    n=r/50;
    r=r%50;

    cout<<n<<" nota(s) de R$ 50,00"<<endl;

    n=r/20;
    r=r%20;
    cout<<n<<" nota(s) de R$ 20,00"<<endl;

    n=r/10;
    r=r%10;
    cout<<n<<" nota(s) de R$ 10,00"<<endl;

    n=r/5;
    r=r%5;
    cout<<n<<" nota(s) de R$ 5,00"<<endl;
    n=r/2;
    r=r%2;
    cout<<n<<" nota(s) de R$ 2,00"<<endl;
    n=r/1;
    cout<<n<<" nota(s) de R$ 1,00"<<endl;

    return 0;
}
