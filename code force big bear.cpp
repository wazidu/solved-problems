#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,l=0,bo=0,a,b;

    cin>>a>>b;

    for(i=1; ;i++)
    {
      //if(a<b)
      //{
          a=a*3;
          b=b*2;
          bo++;

          if(a>b)
            break;


      //}

    }

    cout<<bo<<endl;

    return 0;
}
