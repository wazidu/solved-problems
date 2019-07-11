#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int t,i=0,j,k,c=0,n,a[10000];

    while(cin>>n && n!=0)
    {
        c=0;i=0;
        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        if((1422-a[n-1])>100 )
                 c++;
else{
        for(i=0;i<n;i++)
        {
            if(i>0 && (a[i]-a[i-1])>200  )
               {
                   c++;
                   break;
               }
 }
}

        if(c>0 )
            cout<<"IMPOSSIBLE"<<endl;
        else
            cout<<"POSSIBLE"<<endl;

    }


    return 0;

}
