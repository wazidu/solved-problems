#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,c1=0;

    while(cin>>m )
    {
        c1=0;
       long long int a=0,b=0,c=0;

       for(a=0,b=0,c=0; ;a++,b++,c++)
       {
           k=36*a*a + 18*b*b + 6*c*c;
           if(5*m==k )
            c1++;
          if(k>5*m)
            break;
       }
       cout<<c1<<endl;

    }


return 0;

}
