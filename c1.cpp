#include<iostream>
using namespace std;
int main()
{
    long long i,j,k,n,m;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        if(m>=0)
        {
            for(j=0; j<=m; j++)
            {
                if(j==m)
                    cout<<j<<endl;
                else
                    cout<<j<<" ";
            }
        }
        else if(m<0)
        {
        m=m*(-1);
            for(j=m; j>=0; j--)
            {
                if(j==0)
                    cout<<j<<endl;
                else
                    cout<<"-"<<j<<" ";
            }
        }


    }
    return 0;
}
