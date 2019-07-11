#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,p,q,r,s;
    long long int i,j,k,l,m,n,c=0,d=0,sum=0;

  while(cin>>a>>b )
  {
if( a==0&&b==0) return 0;
      while(1)
      {
          if(a==0 && b==0)
            break;
          l=a%10;
          m=b%10;
          if((l+m+d)>9)
            {
                d=1;
                c++;
            }
          else
            d=0;
        a=a/10;
        b=b/10;
      }
      if(c==0)
        cout<<"No carry operation."<<endl;
      else if(c==1)
        cout<<"1 carry operation."<<endl;
    else
        cout<<c<<" carry operations."<<endl;

c=0;d=0;
}
return 0;
}
