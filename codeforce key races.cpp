#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,c=0,v1,v2,t1,t2,s;

    cin>>s>>v1>>v2>>t1>>t2;

    if((s*v1+2*t1)==(s*v2+2*t2))
        cout<<"Friendship"<<endl;
    else if((s*v1+2*t1)<(s*v2+2*t2))
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
}
