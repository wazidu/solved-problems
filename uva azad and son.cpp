#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    long long int n,p,prime,i,j,k,sum,w,a,b,m;
    while(cin>>n)
    {
        w=0;
        sum=0;
        if(n==0)
        {
            break;
        }
      m=n-1;
      prime=0;
      a=pow(2,m);
      b=pow(2,n)-1;
      p=a*b;

    for(j=2;j<=sqrt(n);j++)
    {
        if(n%j==0)
        {
            prime=1;
            w=1;
        }
    }

    if(prime==0 && n!=2 && n!=3 && n!=5 && n!=7 && n!=13 && n!=17 && n!=19 && n!=31 )
    {
        cout<<"Given number is prime. But, NO perfect number is available."<<endl;


    }
    else if(prime==1)
    {
        cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
    }
    else
    {
        cout<<"Perfect: "<<p<<"!"<<endl;
    }

    }
    return 0;
    }
