#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n,h=0,l=0,a[60],j=0;


    cin>>t;

    while(t--)
    {

        cin>>n;
        j++;

        for(i=0;i<n;i++)
        {
            cin>>a[i];

            if(i>0)
            {
                if(a[i]>a[i-1])
                {
                    h++;
                }
                else if(a[i]<a[i-1])
                    l++;
            }


        }

        cout<<"Case "<<j<<": "<<h<<" "<<l<<endl;
        h=0;l=0;

    }
    return 0;
}
