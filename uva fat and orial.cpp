#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,c=0,d=0,i=0;;
double n,m,a,b,p,q,r;
    cin>>t;

    while(t--)
    {
        i++;
        cin>>n>>m>>a>>b;

        p=(m*(a+b)-n*a)/b;

        if(p>10.00 || p<0.00)
            cout<<"Case #"<<i<<": Impossible"<<endl;
        else
            printf("Case #%lld: %.2lf\n",i,p);




    }


return 0;


}
