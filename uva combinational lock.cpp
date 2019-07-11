#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,j,k,l,m,n,a,b,c,d,sum=0,t1,t2,t3,t4;

    while(cin>>a>>b>>c>>d  )
    {
        if(a==0 && b==0 && c==0 && d==0) break;

        if(a<b) t1=40-(b-a);
        else t1=a-b;
        if(b>c) t2=40-(b-c);
        else t2=c-b;
        if(c<d) t3=40-(d-c);
        else t3=c-d;

        cout<<360*3+(t1+t2+t3)*9<<endl;
    }

    return 0;


}
