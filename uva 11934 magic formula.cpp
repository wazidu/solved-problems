#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,a,b,c,d,count=0,m=0,f;



    while(cin>>a>>b>>c>>d>>l)
    {  if(a==0 && b==0 && c==0 && d==0 && l==0)
          return 0;


    for(i=0;i<=l;i++)
    {
        f=a*i*i+b*i+c;

        if(f%d==0)
            count++;
    }

    cout<<count<<endl;

    count=0;
    }

    return 0;

}
