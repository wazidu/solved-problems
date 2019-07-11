#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,h,m,s;

    cin>>t;

    cout<<t/3600<<":"<<(t%3600)/60<<":"<<(t%3600)%60<<endl;

    return 0;

}
