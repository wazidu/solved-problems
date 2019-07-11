#include<bits/stdc++.h>
using namespace std;
 int i,j,k,l,m,n, one=0,zero=0,p,q,o=0,x[100000];

 /*int beautiful_divisor( int i)
{
   p=i; unsigned int r=i;
    string binary;
    binary= bitset<20>(p).to_string();

    //cout<<binary<<endl;
    while(p>0)
    {
        p=p & (p-1);
        one++;
    }
 unsigned int count1 = 0;
     while (r)
  {
    count1 += r & 1;
    r >>= 1;
  }

    //cout<<one<<endl;
    //cout<<count1<<endl;
    if((one-count1)==1)
    {
           cout<<i<<endl;
       o=1;

       return true;
    }

        return false;

}
int main()
{

    cin>>n;

    for(i=n;i>=1;i--)
    {
        if(n%i==0)
        {
         if(beautiful_divisor(i));
           {
         if (o==1)
         {
                cout<<i<<endl;
                break;
         }

           }

        }
    }
    return 0;

}*/


int main()
{
    cin>>n;

    for(i=1;i<=21;i++)
    {
        x[i]=(pow(2,i)-1)*pow(2,i-1);
    }
    for(i=20;i>=1;i--)
    {
        if(n%x[i]==0)
        {cout<<x[i]<<endl;
        break;
        }
    }
    //main();
    return 0;
}
