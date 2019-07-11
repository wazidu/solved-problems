#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,k=0,a[10000],b[10000],c=0,d=0;

    while(cin>>n>>m && n!=0 && m!=0)
    {
        k++;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<m;i++)
            cin>>b[i];

        if(n==m || n<m)
        {
            cout<<"Case "<<k<<": 0"<<endl;
        }
        else
        {
            //if(n>m)
            //{
                sort(a,a+n);
                cout<<"Case "<<k<<": "<<n-m<<" "<<a[0]<<endl;
       /*     }
            else
            {
                 sort(b,b+m);
                cout<<"Case "<<k<<": "<<m-n<<" "<<b[0]<<endl;
            }*/
        }



    }

    return 0;


}
