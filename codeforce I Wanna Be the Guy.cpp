#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,p,a[1000],q,d=0,e=0;

    cin>>n;
    cin>>p;

    for(i=0;i<p;i++)
        cin>>a[i];

    cin>>q;

    for(i=0;i<q;i++)
    {
        cin>>a[p];
        p++;
    }
    //sort(a,a+p);

    for(i=1;i<=n;i++)
    {
        for(int j=0;j<p;j++)
        {
            if(i==a[j])
              d=1;

        }
        if(d==1)
           {
              d=0;
              e=1;
           }
        else
            {
                cout<<"Oh, my keyboard!"<<endl;
                return 0;
            }
    }
    cout<<"I become the guy."<<endl;

    return 0;

}
