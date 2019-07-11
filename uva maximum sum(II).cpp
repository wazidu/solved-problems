#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,j,k,l,m,a[10000],b[10000];

    while(cin>>k && k!=0)
    {j=0; int sum=0;
        for(i=0;i<k;i++)
        {

            cin>>a[i];
sum=sum+a[i];
            if(a[i]!=0 ){
                    b[j]=a[i];
            j++;

            }
        }
        if(sum==0)
            cout<<"0";
        else
        for(i=0;i<j;i++)
        {
            cout<<b[i];

            if(i<j-1)
                cout<<" ";
        }
        cout<<endl;
    }


}
