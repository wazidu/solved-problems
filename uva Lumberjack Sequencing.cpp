#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,l,m,c=0,d=0,a[10];

    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--)
    {
        for(i=0;i<10;i++)
        {
            cin>>a[i];
            if(i>0 && a[i]>a[i-1] )
                c++;
            else  if(i>0 && a[i]<a[i-1] )
                d++;

        }
        if(c==9|| d==9)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
        c=0;d=0;
    }
    return 0;
}
