#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,p,v,p1=0,v1=0;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>j;
        if(i==1)
            p=j;
        if(i==2)
            v=j;


            if(i>=3 && (i%2)!=0 && p!=j)
            {
               p1=1;
            }
            if(i>=3 && (i%2)==0 && v!=j)
            {
               v1=1;
            }


    }
    cout<<p1<<" "<<v1<<endl;
    if(p1==0 && v1==0 )
    {
        cout<<"YES"<<endl<<p<<" "<<v<<endl;

    }
    else
        cout<<"NO"<<endl;

    main();
    return 0;
}
