#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,c=0,a[10000];
cin>>j;
    while(j--)
    {
        c=0;
        for(i=0;i<5;i++)
        {
            cin>>a[i];

            if(i>0)
            {
                if((a[i]-a[i-1])!=1)
                    c++;
            }
        }
        if((a[0]==1 && a[1]==3 && a[2]==4 && a[3]==5 && a[4]==6) )
            cout<<"N"<<endl;
        else if(c==0)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
