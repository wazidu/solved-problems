#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m=0,n,a[1000],max1,min1;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>k;
        if(i==0)
        {
            max1=k;
            min1=k;
        }
        else
        {
            if((k>max1) )
              {
                  max1=k;
                  m++;
              }
              if(k<min1)
              {
                  min1=k;
                  m++;
              }

        }
    }
    cout<<m<<endl;
    //main();
    return 0;
}
