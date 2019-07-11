#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j=0,k,l,a[100],b[12],sum;

    while(cin>>a[0] && a[0]>=0)
    {
        j++;

        cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9]>>a[10]>>a[11]>>a[12];

        cin>>b[0]>>b[1]>>b[2]>>b[3]>>b[4]>>b[5]>>b[6]>>b[7]>>b[8]>>b[9]>>b[10]>>b[11];

        cout<<"Case "<<j<<":"<<endl;
        for(i=0;i<12;i++)
        {
            if((a[i]-b[i])>=0)
            {
                a[i+1]=a[i+1]+a[i]-b[i];
                cout<<"No problem! :D"<<endl;
            }

            else
            {
                a[i+1]=a[i+1]+a[i];
                cout<<"No problem. :("<<endl;
            }





        }



    }

return 0;

}
