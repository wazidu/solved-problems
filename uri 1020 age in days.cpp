#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,y,m,d;

    cin>>n;

    cout<<n/365<<" ano(s)"<<endl<<(n%365)/30<<" mes(es)"<<endl<<(n%365)%30<<" dia(s)"<<endl;

    return 0;
}
