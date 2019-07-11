#include<bits/stdc++.h>
using namespace std;
long long int a;
    long int fact(long long int a)
    {
        if(a==0)
            return 1;
        else
            return a*fact(a-1);
    }

  int main()
  {
    long long int n,i,j,k,l,c=0;

    while(cin>>n)
    {
        if(n>=0)
        {
if(n==13)
    cout<<"6227020800"<<endl;

        else if( n>13)
            cout<<"Overflow!"<<endl;
        else
        {
            j=fact(n);

            if(j<10000)
                cout<<"Underflow!"<<endl;
            else
                cout<<j<<endl;
        }
        }
        else
        {
            if(abs(n)%2==0)
                cout<<"Underflow!"<<endl;
            else
                cout<<"Overflow!"<<endl;
        }



    }


return 0;


  }




