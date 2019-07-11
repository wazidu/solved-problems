#include<bits/stdc++.h>
using namespace std;
int a1[1000000];
int main()
{
    long long int i,j,k,n,a,b, sum=0, c=0,one=0,two=0;

    cin>>n>>a>>b;
    c=a+b*2; k=b*2;
    for(i=0;i<n;i++)
    {
        cin>>a1[i];
        if(a1[i]==1)
        {
            c=c-1;
        }
        else
        {
          //  if(k>=2)
           // {
                c=c-2;
                k=k-2;
            //}

        }

        //sum=sum+a1[i];
    }

   if(c>=0)
        cout<<c<<endl;
    else
        cout<<c*(-1)<<endl;

    return 0;


}
